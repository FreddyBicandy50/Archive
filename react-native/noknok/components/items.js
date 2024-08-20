import { Pressable, StyleSheet, Image, View, Text } from "react-native";
import { useState } from "react";

export default function ItemView({ name, Item, cost, LBP }) {
  const [cartAdd, setcartAdd] = useState(false);
  return (
    <View>
      <View>
        <Image source={Item} style={styles.img}></Image>
        <Text style={styles.currencyText}>
          <Text style={[styles.currencyText, { fontWeight: "bold" }]}>
            ${cost}
          </Text>
          <Text style={(styles.currencyText, { fontWeight: "bold" })}>
            (LBP
          </Text>
          {Math.floor(cost * LBP)})
        </Text>
        <Pressable
          onPressIn={() => setcartAdd(true)}
          onPressOut={() => setcartAdd(false)}
          style={[styles.button, cartAdd && { backgroundColor: "lightblue" }]}
        >
          <Text style={styles.buttonText}>Add</Text>
        </Pressable>
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  currencyText: {
    fontSize: 13,
    color: "black",
  },
  img: {
    width: 100,
    height: 180,
  },
  button: {
    backgroundColor: "#5DADF8",
    paddingVertical: 10,
    paddingHorizontal: 20,
    borderRadius: 10,
    width: 80,
    height: 40,
    justifyContent: "center",
    alignContent: "center",
  },
  buttonText: {
    color: "white",
    fontSize: 16,
    fontWeight: "bold",
  },
});
