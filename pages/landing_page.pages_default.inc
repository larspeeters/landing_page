<?php
/**
 * Implementation of hook_default_page_manager_pages().
 */
function landing_page_default_page_manager_pages() {
    $files = file_scan_directory(drupal_get_path('module', 'landing_page'). '/pages', '.inc');
    foreach ($files as $absolute => $file) {
        require $absolute;
        if (isset($page)) {
            $pages[$file->name] = $page;
        }
    }
    return $pages;
}