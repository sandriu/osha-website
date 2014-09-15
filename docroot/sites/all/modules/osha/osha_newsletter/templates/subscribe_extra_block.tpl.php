<div id="subscribe-extra">
	<div>
		<?php print $subscribe_form;?>
	</div>
	<hr/>
	<div>
		<?php 
		print t('Not interested anymore?');?>
    &nbsp;&nbsp;
    <?php
		print l(t('Unsubscribe'), $unsubscribe_page_url, array('html' => TRUE));
		?>
	</div>
</div>