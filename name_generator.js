var adjective = ["FAIZAN BROKER", "ALI AASHIQ", "ISAR DM", "IMAM SABA", "RAHBAR","Abir", "Arham", "Sadi", "Labi", "Mahdi","Bannana", "Apple", "Orange","red","blue","green","yellow", "Allen", "Ben", "Charlie", "Douglas", "Earl", "Fred","Bob","Joe","Max","Alfred","Mat"] 

var list;

function generator() {
 document.getElementById("name").innerHTML = adjective[Math.floor(Math.random() * adjective.length)] ;
}
