<?php
/**
 * Created by PhpStorm.
 * User: Lars
 * Date: 25/09/2017
 * Time: 22:18
 */

if(isset($_GET) ) {
    if(isset($_GET['steamid'])) {
        $url = file_get_contents("http://api.steampowered.com/ISteamUser/GetPlayerSummaries/v0002/?key=3F9A051A1E67FE1896C574BF3A374854&steamids=" . $_GET["steamid"]);
        if ($url === FALSE) {
            die('Error: failed to fetch content form Steam. It may be down. Please, try again later.');
        }
        $content = json_decode($url, true);

        $avatar = $content['response']['players'][0]['avatarmedium'];
    }
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="css/landing.css">
    <link href="https://fonts.googleapis.com/css?family=Bungee|Permanent+Marker|Teko" rel="stylesheet">

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
    <script type="text/javascript" src="js/landing.js">	</script>
	
</head>
<body class="landing">
<div id="serverTitle" ></div>
<div id="container" >
<div id="serverInfo" class="shadow" >

    <h1 class="serverTitle">Server info</h1>
    <div class="background">
    <div style="text-align:center;margin:0; height:130px;"><img id="map" src="" height="100px" /> </div>
    <ul>
        <li><span class="info">Gamemode: </span><span class="textinfo" id="gamemode" ></span></li>
        <li><span class="info">Map: </span><span class="textinfo" id="mapname" ></span></li>
        <li><span class="info">Max players: </span><span class="textinfo" id="playerslots" ></span> </li>
    </ul>
    </div>
</div>

<div id="steamuser" class="shadow" >
    <h1 class="serverTitle">Player info</h1>
    <div class="background">
        <div id="player"><img src="<?php echo isset($avatar)? $avatar :  "" ?>" id="avatar" /> <span id="username"><?php echo (isset($content) ) ?  $content['response']['players'][0]['personaname'] : "" ?></span></div>
    </div>
</div>

<div class="serverFooter">Create & developed by larspeeters</div>

</div>

</body>
</html>