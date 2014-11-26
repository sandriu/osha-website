jQuery(document).ready(function()
{
    // init: collapse all groups except for the first one
    jQuery(".blog-archive-block ul").each(function(i)
    {
        if(i != 0){
            jQuery(this).hide();
        }
    });

    // click event: toggle visibility of group clicked (and update icon)
    jQuery(".blog-archive-block h3").click(function()
    {
        jQuery(this).siblings("ul").slideToggle();
		jQuery(this).toggleClass("expand");
    });
});