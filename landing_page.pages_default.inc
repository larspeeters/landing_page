<?php
/**
 * Implementation of hook_default_page_manager_pages().
 */
function landing_page_default_page_manager_pages() {

    $page = new stdClass();
    $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
    $page->api_version = 1;
    $page->name = 'landing_page';
    $page->task = 'page';
    $page->admin_title = 'landing_page';
    $page->admin_description = '';
    $page->path = 'landing_page';
    $page->access = array(
        'plugins' => array(),
    );
    $page->menu = array();
    $page->arguments = array();
    $page->conf = array(
        'admin_paths' => FALSE,
    );
    $page->default_handlers = array();
    $handler = new stdClass();
    $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
    $handler->api_version = 1;
    $handler->name = 'page_landing_page__panel_context_b13639e9-d91e-4189-9781-af395197dc56';
    $handler->task = 'page';
    $handler->subtask = 'landing_page';
    $handler->handler = 'panel_context';
    $handler->weight = 0;
    $handler->conf = array(
        'title' => 'Panel',
        'no_blocks' => 0,
        'pipeline' => 'standard',
        'body_classes_to_remove' => '',
        'body_classes_to_add' => 'landing',
        'css_id' => 'landing_page',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(),
        'name' => '',
    );
    $display = new panels_display();
    $display->layout = 'twocol_63_37_stacked';
    $display->layout_settings = array();
    $display->panel_settings = array(
        'style_settings' => array(
            'default' => NULL,
            'header' => NULL,
            'left' => NULL,
            'right' => NULL,
            'footer' => NULL,
        ),
        'left' => array(
            'style' => 'naked',
        ),
    );
    $display->cache = array();
    $display->title = '';
    $display->uuid = '321ab9d1-7a79-481b-9ce8-a4e0353748d8';
    $display->storage_type = 'page_manager';
    $display->storage_id = 'page_landing_page__panel_context_b13639e9-d91e-4189-9781-af395197dc56';
    $display->content = array();
    $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-daefa9d1-292e-47b6-87fe-704b8f606fb2';
    $pane->panel = 'header';
    $pane->type = 'views';
    $pane->subtype = 'landing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'override_pager_settings' => 0,
        'use_pager' => 1,
        'nodes_per_page' => '10',
        'pager_id' => '0',
        'offset' => '0',
        'more_link' => 0,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => '',
        'display' => 'server_title',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'daefa9d1-292e-47b6-87fe-704b8f606fb2';
    $display->content['new-daefa9d1-292e-47b6-87fe-704b8f606fb2'] = $pane;
    $display->panels['header'][0] = 'new-daefa9d1-292e-47b6-87fe-704b8f606fb2';
    $pane = new stdClass();
    $pane->pid = 'new-3ce26315-ce3a-430e-8227-c9881c5877ca';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'landing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'override_pager_settings' => 0,
        'use_pager' => 0,
        'nodes_per_page' => '0',
        'pager_id' => '0',
        'offset' => '0',
        'more_link' => 0,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => '',
        'display' => 'steam_user',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ce26315-ce3a-430e-8227-c9881c5877ca';
    $display->content['new-3ce26315-ce3a-430e-8227-c9881c5877ca'] = $pane;
    $display->panels['left'][0] = 'new-3ce26315-ce3a-430e-8227-c9881c5877ca';
    $pane = new stdClass();
    $pane->pid = 'new-cdd6aae1-cb9d-492d-81b5-3a27fe52b843';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'landing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'override_pager_settings' => 0,
        'use_pager' => 1,
        'nodes_per_page' => '10',
        'pager_id' => '0',
        'offset' => '0',
        'more_link' => 0,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => '',
        'display' => 'server_info',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cdd6aae1-cb9d-492d-81b5-3a27fe52b843';
    $display->content['new-cdd6aae1-cb9d-492d-81b5-3a27fe52b843'] = $pane;
    $display->panels['left'][1] = 'new-cdd6aae1-cb9d-492d-81b5-3a27fe52b843';
    $pane = new stdClass();
    $pane->pid = 'new-ba1684d8-aa59-4200-9874-cb67267d2a8f';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'landing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'override_pager_settings' => 0,
        'use_pager' => 0,
        'nodes_per_page' => '0',
        'pager_id' => '0',
        'offset' => '0',
        'more_link' => 0,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => '',
        'display' => 'server_footer',
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ba1684d8-aa59-4200-9874-cb67267d2a8f';
    $display->content['new-ba1684d8-aa59-4200-9874-cb67267d2a8f'] = $pane;
    $display->panels['left'][2] = 'new-ba1684d8-aa59-4200-9874-cb67267d2a8f';
    $display->hide_title = PANELS_TITLE_FIXED;
    $display->title_pane = '0';
    $handler->conf['display'] = $display;
    $page->default_handlers[$handler->name] = $handler;

    $pages['landing_page'] = $page;
    return $pages;
}