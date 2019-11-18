# `LatLng`

## Types

### `t`

This type needs to be created, as well as consumed. When the type is returned,
individual keys may be accessed using the `##` accessor.

```reason
type t = {
  .
  "latitude": float,
  "longitude": float,
};
```

```reason
create: (~latitude: float, ~longitude: float) => t
```

### `weighted`

```reason
weighted: (~latitude: float, ~longitude: float, ~weight: float=?, unit) => t
```

### `animated`

This can be created using the `createAnimated` method, given an object of type
`t`.

```reason
createAnimated: t => animated
```
