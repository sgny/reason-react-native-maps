 let region =
   ReactNativeMaps.Region.create(
     ~latitudeDelta=0.0922,
     ~longitudeDelta=0.0421,
     ~latitude=0.0, ~longitude=0.0
   );

 let styles =
   StyleSheet.create({"map": StyleSheet.absoluteFillObject});

 [@react.component]
 let make = () => {
   <MapView region style={styles##map} />;
 };
