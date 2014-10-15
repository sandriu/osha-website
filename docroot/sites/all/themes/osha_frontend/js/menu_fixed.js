// Menu scroll
jQuery(document).ready(function() {
var nav = jQuery('#block-menu-block-1');
pos = nav.offset();
	// Esperamos al DOM
	jQuery(window).scroll(function(){
		// Anclamos el menú si el scroll es
		// mayor a la posición superior del tag
		if ( (jQuery(this).scrollTop() >= 122)){
		// Añadimos la clase fixes al menú y la clase stickey a breadcrumb para que se siga viendo
			jQuery('#block-menu-block-1').addClass('fixed');
			jQuery('.breadcrumb').addClass('stickey');
		// Eliminamos las clases para volver a la posición original
		} else if ( (jQuery(this).scrollTop() <= 122)){
		// Elimina clase fixes y stickey
			jQuery('#block-menu-block-1').removeClass('fixed');
			jQuery('.breadcrumb').removeClass('stickey');
		}
	});
});
