<?php
/**
 * Created by PhpStorm.
 * User: lars.peeters
 * Date: 2/12/2016
 * Time: 13:37
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

<div id="steamuser" class="shadow" >
	<h1 class="serverTitle">Player info</h1>
    <div class="background">
    <div id="player"><img src="<?php echo isset($avatar)? $avatar :  "" ?>" id="avatar" /> <span id="username"><?php echo (isset($content) ) ?  $content['response']['players'][0]['personaname'] : "" ?></span></div>
</div>
    </div>