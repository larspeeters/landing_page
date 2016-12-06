/**
 * Created by lars.peeters on 4/12/2016.
 */
(function($) {

    'use strict';

    var LOAD = {};

    /**
     * Initialize the loading screen.
     */
    LOAD.init = function () {
        this.progress = 0.0;
        this.filesNeeded = 1;
        this.filesTotal = 1;

        this.$ = {};

        // loading bar
        /*this.$.progressBar = document.getElementById('progressbar');
        this.$.status = document.getElementById('status');
        this.$.percentage = document.getElementById('percentage');*/

        // server info
        //this.$.mapPreview = document.getElementById('mappreview');
        this.$.serverName = document.getElementById('serverTitle');
        this.$.mapName = document.getElementById('mapname');
        this.$.playerSlots = document.getElementById('playerslots');

        //this.updateProgress();
    };
	
	/**
     * Sets the server info data on the loading screen. This will be called on
     * the `GameDetails` loading screen event.
     */
    LOAD.setServerInfo = function (serverName, mapName, maxPlayers) {
        // set map preview image
        // this.$.mapPreview.src = 'asset://mapimage/' + mapName;

        // gametracker.com map previews can also be used
        //this.$.mapPreview.src = 'http://image.www.gametracker.com/images/maps/160x120/garrysmod/' + mapName + '.jpg';

        //this.$.mapName.innerText = mapName;
        this.$.serverName.innerText = "server";
        //this.$.playerSlots.innerText = maxPlayers + ' player slots';
    };
	
	LOAD.init();
    window.LOAD = LOAD;
	
	/**
     * Called when the loading screen finishes loading all assets.
     *
     * @param {String} serverName Server name.
     * @param {String} serverUrl  Server loading screen URL.
     * @param {String} mapName    Map name.
     * @param {Number} maxPlayers Maximum players.
     * @param {String} steamid    64-bit Steam ID.
     * @param {String} gamemode   Gamemode folder name.
     */
    window.GameDetails = function (serverName, serverUrl, mapName, maxPlayers, steamid, gamemode) {
        document.getElementById('serverTitle').innerText = serverName;
    };
   
})(jQuery);

