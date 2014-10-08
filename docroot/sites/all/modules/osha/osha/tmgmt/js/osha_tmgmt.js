jQuery(document).ready(function() {

    //select all languages in the cart form
    jQuery('#edit-select-all-lng').change(function(){
        select_values('#edit-select-all-lng', '#edit-target-language', 'all');
        jQuery('#edit-select-some-lng').attr('checked', '');
    });
    //select a list of languages in the cart form
    jQuery('#edit-select-some-lng').change(function(){
        select_values('#edit-select-some-lng', '#edit-target-language', [ "bg", "en", "ro"]);
        jQuery('#edit-select-all-lng').attr('checked', '');
    });
});

/**
 * select and deselect multiple elements (or all) is a multi select drop down
 */
function select_values(source, target, values){
    jQuery('select'+target+' > option').attr('selected', '');

    if(jQuery(source).is(":checked")){
        if(values == 'all'){
            jQuery('select'+target+' > option').attr('selected', 'selected');
        }else{
            jQuery.each(values, function(i, val){
                jQuery(''+target+' option[value="'+val+'"]').attr('selected', 'selected');
            });
        }
    }
}