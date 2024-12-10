// // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // //
// orderPage.php
// // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // //

//
// for the dropdown in the select tab bel orderpage.php
//
document.addEventListener("DOMContentLoaded", function () {
  var selectElement = document.getElementById("mySelect");
  var container = document.getElementById("selectContainer");

  // sta3malta to increase its size bas 2ekbos 3al select tag
  var orderPageDiv = document.querySelector(".order-page");

  selectElement.size = 0;

  selectElement.addEventListener("click", function () {
    container.classList.toggle("showOptions");
    if (selectElement.size === 0) {
      selectElement.size = 5;

      //increase lheight taba3 l orderpage form (ma kenet tenzed la 7ala0
      orderPageDiv.style.height = "650px";
    } else {
      // to Hide options on second click (bas 2a3mel select la option y3ne)
      selectElement.size = 0;
      orderPageDiv.style.height = "auto";
    }
  });
});
