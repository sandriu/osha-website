<?php
/**
 * @file
 * Default theme implementation to format the simplenews newsletter footer.
 *
 * Copy this file in your theme directory to create a custom themed footer.
 * Rename it to simplenews-newsletter-footer--[tid].tpl.php to override it for a
 * newsletter using the newsletter term's id.
 *
 * @todo Update the available variables.
 * Available variables:
 * - $build: Array as expected by render()
 * - $build['#node']: The $node object
 * - $language: language code
 * - $key: email key [node|test]
 * - $format: newsletter format [plain|html]
 * - $unsubscribe_text: unsubscribe text
 * - $test_message: test message warning message
 * - $simplenews_theme: path to the configured simplenews theme
 *
 * Available tokens:
 * - [simplenews-subscriber:unsubscribe-url]: unsubscribe url to be used as link
 *
 * Other available tokens can be found on the node edit form when token.module
 * is installed.
 *
 * @see template_preprocess_simplenews_newsletter_footer()
 */
?>
<?php
$template_path = drupal_get_path('theme', 'osha_frontend');
$template_url = url($template_path, array('absolute' => TRUE, 'language' => LANGUAGE_NONE));
?>
<div style="border-top: 1px solid #004098; color: #666666; font-size: 11px; text-align: center;">
  <div style="background-color: #f5f5f5; font-family: Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; margin-top: 1px; padding: 10px 0;">
    <span style="font-size: 13px;"><?php print t('Occupational Safety and Health News &ndash; Europe'); ?></span><br /><span><?php print t('Brought to you by EU-OSHA.'); ?></span> <span style="font-style: normal; font-weight: bold;"><?php print t('Visit us at:'); ?></span> <?php print l(t('http://osha.europa.eu'), 'http://osha.europa.eu'); ?>
  </div>
  <div style="font-family: Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; font-size: 14px; margin: 20px;">
    <?php print t('Subscribe to our <a href="@url" style="@style">Alert service</a> for customised content delivery', array('@style' => 'color: #144989; font-size: 18px; text-decoration: none;', '@url' => url('https://osha.europa.eu/en/alertservice'))); ?>
  </div>
  <div class="social">
    <?php
    $social = array(
      'twitter' => array(
        'path' => 'https://twitter.com/eu_osha',
        'alt' => t('Twitter')
      ),
      'linkedin' => array(
        'path' => 'https://www.linkedin.com/company/european-agency-for-safety-and-health-at-work',
        'alt' => t('LinkedIn')
      ),
      'facebook' => array(
        'path' => 'https://www.facebook.com/EuropeanAgencyforSafetyandHealthatWork',
        'alt' => t('Facebook')
      ),
      'flickr' => array(
        'path' => 'https://www.flickr.com/people/euosha',
        'alt' => t('Flickr')
      ),
      'youtube' => array(
        'path' => 'https://www.youtube.com/user/EUOSHA',
        'alt' => t('youtube')
      )
    );

    foreach ($social as $name => $options) {
      print l(theme('image', array(
        'path' => $directory . '/img/icon-oshmail-' . $name . '.png',
        'width' => 40,
        'height' => 40,
        'alt' => $options['alt'],
        'attributes' => array('style' => 'border: none; margin-right: 5px; vertical-align: middle;')
      )), $options['path'], array(
        'attributes' => array('style' => 'color: #144989; text-decoration: none;'),
        'html' => TRUE,
        'external' => TRUE
      ));
    }
    ?><span style="background: none repeat scroll 0 0 #eee; border-radius: 0.5em; box-shadow: -1px 1px 0 rgba(0, 0, 0, 0.2); cursor: pointer; display: inline-block; font: 18px/100% Arial,Helvetica,sans-serif; letter-spacing: 1px; margin: 0 2px 0 25px; outline: medium none; padding-left: 1em; padding-right: 1em; padding: 0.5em 1em 0.55em; text-align: center; text-decoration: none; vertical-align: baseline;"><?php print t('Like what you&amp;re reading? <a href="@url" style="@style">Tell a colleague</a>', array('@style' => 'color: #144989; text-decoration: none;', '@url' => 'https://osha.europa.eu/en/news/oshmail/sendto_form')); ?></span>
  </div>
  <div style="font-family: Verdana,Helvetica,'Lucida Grande',Lucida,Arial,sans-serif; font-size: 11px; margin: 45px 0 18px;">
    <?php print t('No longer wish to receive OSHmail? <a href="@url" style="@style">Unsubscribe here.</a>', array('@style' => 'color: #144989; text-decoration: none;', '@url' => '[simplenews-subscriber:unsubscribe-url]')); ?>
  </div>
  <?php if ($key == 'test'): ?>
    <div><?php print $test_message ?></div>
  <?php endif; ?>
</div>
