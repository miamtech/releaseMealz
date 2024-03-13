To import Mealz libraries you should add 

```koltin
// to add in your main gradle file
repositories {
     maven {
         name = "miamCore"
         url = uri("https://github.com/miamtech/miamCorePublic")
     }
}
```

and then 

 ```koltin
 dependencies {
    implementation 'ai.mealz:package:version'
}
```