# `Geojson` Component

In order to limit dependencies for `reason-react-native-maps`, a ready-to-use
`Geojson` component is not provided. Instead, a suitable instance of the
`Geojson.Make` module needs to be created, as below, specifying the type for the
`geojson` prop:

#### **`YourModule.re`**

```reason
include ReactNativeMaps.Geojson.Make({
  type t = someType;
});
```

While you may define your own type, for type safe handling of `GeoJSON` objects,
you may use the types defined in the
[GeoReason](https://github.com/HomeBay/geo-reason/) package. In that case, the
relevant type is `GeoReason.Data.t` and the instance can be created as below:

#### **`YourModule.re`**

```reason
include ReactNativeMaps.Geojson.Make({
  type t = GeoReason.Data.t;
});
```

Please make sure to follow installation instructions for `GeoReason` and update
`bsconfig.json` accordingly for your project.

Once created, the module would be used as below:

```reason
<YourModule
  geojson=someValue
/>
```

Please note that only the `FeatureCollection(list(Feature.t))` variant will be
valid for use with your component.

An instance of the module may be created within your module, as a submodule, as
below:

#### **`YourModule.re`**

```reason
module Geojson = ReactNativeMaps.Geojson.Make({
  type t = someType;
});
```

in which case the module would be used as below:

```reason
<YourModule.Geojson
  geojson=someValue
/>
```
