<html>
  <head>
    
    <meta charset="uft-8">
   
    <title> Furkan DENIZ 2018280074</title>
    <title>Write a JavaScript function that Convert Roman Numeral to Integer</title>
    <title> Write a JavaScript function that Convert an integer into a Roman Numeral</title>

  </head>
  <body>
   <h1>Furkan DENIZ 2018280074</h1>
    <h2> 2019 Güz Dönemi 2.ÖDEVI </h2>


  <input id =input1 placeholder="Roman Numeral" ></input><button id=buton1 onclick="myFunction()">Result</button>
  <p id ="p1" > Output : </p>
  <input id="input2" placeholder=" Integer "></input><button id="buton2" onclick="myFunction1()">Result</button>
		<p id="p2">Output :  </p>
  
  <script>

function roman_to_Int(str1) {
if(str1 == null) return -1;
var num = char_to_int(str1.charAt(0));
var pre, curr;

for(var i = 1; i < str1.length; i++){
curr = char_to_int(str1.charAt(i));
pre = char_to_int(str1.charAt(i-1));
if(curr <= pre){
num += curr;
} else {
num = num - pre*2 + curr;
}
}

return num;
}

function myFunction() {
var romanNumeral = document.getElementById("input1").value;
  document.getElementById("p1").innerHTML = "Output :" +(roman_to_Int(romanNumeral));

}

function myFunction1() {
		var numeral = document.getElementById("input2").value;
		document.getElementById("p2").innerHTML = "Output :  " + (Conclusion(numeral)); 
		}



function char_to_int(c){
switch (c){
case 'I': return 1;
case 'V': return 5;
case 'X': return 10;
case 'L': return 50;
case 'C': return 100;
case 'D': return 500;
case 'M': return 1000;
default: return -1;
}
}
function roman_to_Int(str1) {
if(str1 == null) return -1;
var num = char_to_int(str1.charAt(0));
var pre, curr;

for(var i = 1; i < str1.length; i++){
curr = char_to_int(str1.charAt(i));
pre = char_to_int(str1.charAt(i-1));
if(curr <= pre){
num += curr;
} else {
num = num - pre*2 + curr;
}
}

return num;
}

function char_to_int(c){
switch (c){
case 'I': return 1;
case 'V': return 5;
case 'X': return 10;
case 'L': return 50;
case 'C': return 100;
case 'D': return 500;
case 'M': return 1000;
default: return -1;
}
}
function Conclusion(num7) {                     
		if(num7 < 1)    { return "";}
		if(num7 >= 4000){ return "Lütfen sadece 1 ile 3999 arasýnda sayý giriniz.";}
		if(num7 >= 1000){ return "M"   + Conclusion(num7 - 1000);}
		if(num7 >= 590) { return "DXC" + Conclusion(num7 - 590) ;}
		if(num7 >= 550) { return "DL"  + Conclusion(num7- 550) ;}
                if(num7 >= 540) { return "DXL" + Conclusion(num7- 540) ;}		
		if(num7 >= 510) { return "DX"  + Conclusion(num7 - 510) ;}		
		if(num7 >= 500) { return "D"   + Conclusion(num7 - 500) ;}		
		if(num7 >= 190) { return "CXC" + Conclusion(num7 - 190) ;}
		if(num7 >= 150) { return "CL"  + Conclusion(num7 - 150) ;}
		if(num7 >= 140) { return "CXL" + Conclusion(num7 - 140) ;}
		if(num7 >= 110) { return "CX"  + Conclusion(num7 - 110) ;}		
		if(num7 >= 100) { return "C"   + Conclusion(num7 - 100) ;} 	
		if(num7 >= 90)  { return "XC"  + Conclusion(num7 - 90)  ;}
		if(num7 >= 50)  { return "L"   + Conclusion(num7 - 50)  ;}  
		if(num7>= 40)  { return "XL"  + Conclusion(num7 - 40)  ;}
		if(num7 >= 10)  { return "X"   + Conclusion(num7 - 10)  ;}
		if(num7 >= 9)   { return "IX"  + Conclusion(num7 - 9)   ;}
		if(num7 >= 5)   { return "V"   + Conclusion(num7 - 5)   ;}
		if(num7 >= 4)   { return "IV"  + Conclusion(num7- 4)   ;}
                if(num7 >= 1)   { return "I"   + Conclusion(num7 - 1)   ;}  
  
}


   //Referance
   // https://www.w3resource.com/javascript-exercises/javascript-math-exercise-22.php
   // https://stackoverflow.com/questions/9083037/convert-a-number-into-a-roman-numeral-in-javascript
  
  </script>
  </body>
  
  
</html>
  
