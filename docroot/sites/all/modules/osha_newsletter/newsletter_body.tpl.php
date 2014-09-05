<table>
  <tbody>
    <tr>
      <td width="590" valign="top">
        <?php
          foreach ($items as $item) {
            if ($item->type == 'taxonomy_term') { ?>
              <div style="font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif;">
                <h1 style="color: #191919; font: 18px/35px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; letter-spacing: 2px; margin: 34px 0 11px; text-shadow: 2px 2px 5px #dddddd; text-transform: uppercase;">
                  <?php print $item->content->name; ?>
                </h1>
              </div>
            <?php
            } else if ($item->type == 'node' && ($item->content->type == 'highlight')) { ?>
              <div style="font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif;">
                <table style="border: 1px solid #d1d1d1; color: #191919; font: 13px/16px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; margin-bottom: 20px; padding: 8px; width: 570px;">
                  <tbody>
                    <tr>
                      <td colspan="2">
                        <h2 style="color: #191919; font-size: 19px; font-weight: bold; margin: 15px 0; padding: 0 0 11px;">
                          <?php
                          print l($item->content->title, url('node/' . $item->content->nid, array('absolute' => TRUE)), array(
                            'attributes' => array('style' => 'color: #144989; text-decoration: none;'),
                            'external' => TRUE
                          ));
                          ?>
                        </h2>
                      </td>
                    </tr>
                    <tr>
                      <td width="120" valign="top">
                        <?php
                        $lang = $item->content->language;
                        print l(theme('image_style', array(
                          'style_name' => 'thumbnail',
                          'path' => $item->content->field_image["$lang"][0]['uri'],
                          'width' => 100,
                          'alt' => $item->content->field_image["$lang"][0]['alt']
                        )), url('node/' . $item->content->nid, array('absolute' => TRUE)), array(
                          'html' => TRUE,
                          'external' => TRUE
                        ));
                        ?>
                      </td>
                      <td valign="top">
                        <?php print $item->content->field_summary["$lang"][0]['safe_value']; ?>
                      </td>
                    </tr>
                  </tbody>
                </table>
              </div>
            <?php
            } else if ($item->type == 'node') {?>
              <div style="font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif;">
                <table style="color: #191919; font: 13px/16px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; margin-bottom: 10px; padding: 8px; width: 570px;">
                  <tbody>
                    <tr>
                      <td colspan="2">
                        <h2 style="color: #191919; font-size: 15px; font-weight: bold; margin: 5px 0; padding: 0 0 5px;">
                          <?php
                          print l(' > ' . $item->content->title, url('node/' . $item->content->nid, array('absolute' => TRUE)), array(
                            'attributes' => array('style' => 'color: #144989; text-decoration: none;'),
                            'external' => TRUE
                          ));
                          ?>
                        </h2>
                      </td>
                    </tr>
                  </tbody>
                </table>
              </div>
            <?php
            }
          }
        ?>
      </td>
      <td width="200" valign="top"  style="padding-left: 24px; padding-top: 36px;">
        <div style="font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif;">
          <h2 style="color: #191919; font-size: 18px; font-weight: normal; margin: 12px 0 13px; padding: 0;">
            <?php print t('Blog'); ?>
          </h2>
        </div>
        <div style="background-color: #f2f4f6; font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; margin-bottom: 20px;">
          <h2 style="color: #191919; font-size: 11px; font-weight: normal; margin-bottom: 13px; padding: 6px 15px; text-align: right;">
            <?php print l(t('View the blog'), 'https://osha.europa.eu/en/about/director_corner/blog', array('attributes' => array('style' => 'color: #144989; text-decoration: none;'), 'external' => TRUE)); ?> &raquo;
          </h2>
        </div>
        <div style="font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif;">
          <h2 style="color: #191919; font-size: 18px; font-weight: normal; margin: 12px 0 13px; padding: 0;">
            <?php print t('News'); ?>
          </h2>
        </div>
        <div style="background-color: #f2f4f6; font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; margin-bottom: 20px;">
          <h2 style="color: #191919; font-size: 11px; font-weight: normal; margin-bottom: 13px; padding: 6px 15px; text-align: right;">
            <?php print l(t('More news'), 'https://osha.europa.eu/en/news', array('attributes' => array('style' => 'color: #144989; text-decoration: none;'), 'external' => TRUE)); ?> &raquo;
          </h2>
        </div>
        <div style="font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif;">
          <h2 style="color: #191919; font-size: 18px; font-weight: normal; margin: 12px 0 13px; padding: 0;">
            <?php print t('Events'); ?>
          </h2>
        </div>
        <div style="background-color: #dce8f4; font: 12px Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; margin-bottom: 20px;">
          <h2 style="color: #191919; font-size: 11px; font-weight: normal; margin-bottom: 13px; padding: 6px 15px; text-align: right;">
            <?php print l(t('More events'), 'https://osha.europa.eu/en/news', array('attributes' => array('style' => 'color: #144989; text-decoration: none;'), 'external' => TRUE)); ?> &raquo;
          </h2>
        </div>
      </td>
    </tr>
  </tbody>
</table>
