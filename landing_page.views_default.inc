<?php
/**
 * Created by PhpStorm.
 * User: Lars
 * Date: 26/12/2016
 * Time: 22:57
 */
function landing_page_views_default_views() {
    $files = file_scan_directory(drupal_get_path('module', 'landing_page') .'/views', '/\.view/');
    foreach ($files as $absolute => $file) {
        require $absolute;
        if (isset($view)) {
            $views[$file->name] = $view;
        }
    }
    return $views;
}