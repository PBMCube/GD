/**
 * Game Develop
 *    Player
 *
 *  Par Florian "4ian" Rival
 *
 */
/**
 *
 *
 *  G�re l'ouverture et la sauvegarde des jeux Game Develop
 */

#ifndef OPENSAVEGAME_H
#define OPENSAVEGAME_H

#include "GDL/Game.h"
#include <string>
#include "GDL/tinyxml.h"
#include "GDL/algo.h"

using namespace std;

class GD_API OpenSaveGame
{
public:
    OpenSaveGame( Game & game_ );
    virtual ~OpenSaveGame();

    void OpenFromFile(string file);
    void OpenFromString(string text);
    bool SaveToFile(string file);
    void RecreatePaths(string file);

    static void OpenEvents( vector < Event > & list, TiXmlElement * elem );
    static void SaveEvents( const vector < Event > & list, TiXmlElement * events );

protected:
private:

    Game & game;

    void OpenDocument(TiXmlDocument & doc);
    void OpenGameInformations( TiXmlElement * elem );
    void OpenImages( const TiXmlElement * elem, TiXmlElement * dossierElem );
    void OpenObjects(vector < boost::shared_ptr<Object> > & objects, TiXmlElement * elem);
    void OpenPositions( vector < InitialPosition > & list, TiXmlElement * elem );
    void OpenGroupesObjets( vector < ObjectGroup > & list, TiXmlElement * elem );
    void OpenLayers( vector < Layer > & list, TiXmlElement * elem );
    static void OpenVariablesList(ListVariable & list, const TiXmlElement * elem);

    void SavePositions( const vector < InitialPosition > & list, TiXmlElement * positions );
    void SaveObjects( const vector < boost::shared_ptr<Object> > & list, TiXmlElement * objects );
    void SaveGroupesObjets( const vector < ObjectGroup > & list, TiXmlElement * grpsobjets );
    void SaveLayers( const vector < Layer > & list, TiXmlElement * layers );
    static void SaveVariablesList(const ListVariable & list, TiXmlElement * elem);
};

#endif // OPENSAVEGAME_H