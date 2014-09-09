<table border="0" cellpadding="0" cellspacing="0" width="396" class="blue-line">
  <tbody>
    <tr>
      <td colspan="2" style="background-color:#003399; width:800px; height: 4px;" valign="top"></td>
    </tr>
  </tbody>
</table>
<table border="0" cellpadding="10" cellspacing="0" width="396" class="category-name">
  <tbody>
    <tr>
      <td style="font-family: Oswald, Arial, sans-serif; font-weight: normal; font-size: 20px; padding-left: 0px; padding-right: 0px;">
        <?php
          if (isset($name_field[$language])) {
            print($name_field[$language][0]['safe_value']);
            } else {
              print($name_field[0]['safe_value']);
          }
        ?>
      </td>
    </tr>
  </tbody>
</table>