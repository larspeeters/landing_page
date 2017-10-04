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


        //this.updateProgress();
    };
	
	/**
     * Sets the server info data on the loading screen. This will be called on
     * the `GameDetails` loading screen event.
     */
    LOAD.setServerInfo = function (serverName, mapName, maxPlayers,gamemode) {
        // set map preview image
        // this.$.mapPreview.src = 'asset://mapimage/' + mapName;


        document.getElementById('serverTitle').innerText = serverName;
        document.getElementById('mapname').innerText = mapName;
        document.getElementById('gamemode').innerText = gamemode;
        document.getElementById('playerslots').innerText = maxPlayers;
        document.getElementById('map').src = 'http://image.www.gametracker.com/images/maps/160x120/garrysmod/' + mapName + '.jpg';

        $('#map').on("error", function () {
            document.getElementById('map').src = "http://vignette3.wikia.nocookie.net/gmod/images/3/36/GMod_Logo.png";
        });

    };


    /**
     * Called on the `DownloadingFile` loading screen event.
     * Updates the loading progress and shows which file is currently being
     * downloaded.
     */
    LOAD.onFileDownloading = function (filePath) {
        var status = 'Downloading ' + filePath + '...';
        this.onStatusChanged(status);
    };

    /**
     * Called on the `SetStatusChanged` loading screen event.
     */
    LOAD.onStatusChanged = function (status) {
        document.getElementById('download').innerText = status;
    };

    LOAD.init();
    window.LOAD = LOAD;
    $(document).ready(function(e){
        LOAD.setServerInfo("The Good, The Bad, The Mighty.","ph_ratrun",10,"Gungaym");
    });
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

		LOAD.setServerInfo(serverName,mapName,maxPlayers,gamemode);
    };

})(jQuery);