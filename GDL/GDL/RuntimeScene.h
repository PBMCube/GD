/**
 * Game Develop
 *    Player
 *
 *  Par Florian "4ian" Rival
 *
 */
/**
 * Une sc�ne Runtime est une sc�ne directement utilis�e par le
 * moteur de jeu ( contient images, sons ).
 * Elle est charg�e depuis une sc�ne normale ( voir LoadScene )
 */

#ifndef SCENEIG_H
#define SCENEIG_H

#include "GDL/MemTrace.h"

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <boost/shared_ptr.hpp>

#include "GDL/Scene.h"
#include "GDL/RuntimeGame.h"
#include "GDL/ImageManager.h"
#include "GDL/Object.h"
#include "GDL/Event.h"
#include "GDL/algo.h"
#include "GDL/Son.h"
#include "GDL/Music.h"
#include "GDL/constantes.h"
#include "GDL/SortByPlan.h"
#include "GDL/Text.h"
#include "GDL/SoundManager.h"
#include "GDL/Layer.h"
#include "GDL/ManualTimer.h"

#ifdef GDE
#include "GDL/BaseDebugger.h"
#endif

#ifndef RELEASE
#include "GDL/profile.h"
#endif

class GD_API RuntimeScene : public Scene
{
    public:
        RuntimeScene(sf::RenderWindow * renderWindow_, RuntimeGame * game_);
        virtual ~RuntimeScene();

        RuntimeScene& operator=(const RuntimeScene & scene);
        RuntimeScene(const RuntimeScene & scene);

        //Pointeurs vers divers �lements utilis�s par la sc�ne
        sf::RenderWindow *  renderWindow;
        RuntimeGame *       game;
        SoundManager *      soundManager;
        const sf::Input *   input;
        #ifdef GDE
        BaseDebugger *      debugger;
        #endif

        bool running;

        //Donn�es suppl�mentaires pour une RuntimeScene
        vector < boost::shared_ptr<Object> >    objets;
        ListVariable                            variables;
        vector < Text >                         textes;
        vector < ManualTimer >                  timers;
        float                                   pauseTime;
        int                                     backgroundColorR;
        int                                     backgroundColorG;
        int                                     backgroundColorB;
        ErrorReport                             errors;

        //Fonctions suppl�mentaires pour une RuntimeScene
        //-> Chargement � partir d'une sc�ne
        bool LoadFromScene( const Scene & scene );
        void PreprocessScene( const Game & Jeu );
        void PreprocessEventList( const Game & Jeu, vector < Event > & listEvent );

        void ChangeRenderWindow(sf::RenderWindow * window);

        //-> Gestion de la boucle de jeu
        int RenderAndStep(unsigned int nbStep);
        void RenderWithoutStep();

        //Calques
        const Layer & GetLayer(string name) const;
        Layer & ModLayer(string name);

        //Acc�s au temps
        inline void SetTimeScale(float timeScale_) { timeScale = timeScale_; };
        inline float GetTimeScale() const { return timeScale; };
        inline float GetElapsedTime() const { return realElapsedTime*timeScale; };
        inline float GetTimeFromStart() const { return timeFromStart; };
        inline bool IsFirstLoop() const { return firstLoop; };

        bool StopMusic();

    protected:

        //Fonctions suppl�mentaires pour une RuntimeScene
        //-> Gestion de la boucle de jeu
        void Render();
        bool AfficheTexte(string layer = "");
        bool OrdreAffichageObjets( vector < PlanObjet > & ordre );
        void GestionObjets();
        void ManageRenderTargetEvents();
        bool UpdateMousePos();
        bool UpdateTime();
        void GestionMusique();
        #ifndef RELEASE
        void DisplayProfile(CProfileIterator * iter, int x, int & y);
        #endif

        //Donn�es suppl�mentaires pour une RuntimeScene
        bool firstLoop;
        bool isFullScreen;
        float realElapsedTime;
        float elapsedTime;
        float timeScale;
        float timeFromStart;

        static Layer badLayer;
};

#endif // SCENEIG_H