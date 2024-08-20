import { StatusBar } from "expo-status-bar";
import { useState } from "react";
import {
  Button,
  Image,
  ScrollView,
  View,
  StyleSheet,
  Text,
  Pressable,
  Alert,
} from "react-native";
import ItemView from "./components/items";
import Cmodal from "./components/modal";

export default function App() {
  const [isPressed, setIsPressed] = useState(false);
  const [address, setAddress] = useState("click to change address");
  const time = Math.floor(Math.random() * 20) + 1;

  const LBP = 89700;
  const Items = [
    require("./assets/sitos.png"),
    require("./assets/stax.png"),
    require("./assets/unica.png"),
    require("./assets/bruchette.png"),
  ];
  const showAlertWithInput = () => {
    Alert.prompt("Enter Address", "Please enter your delivery Address:", [
      {
        text: "Cancel",
        style: "cancel",
      },
      {
        text: "OK",
        onPress: (input) => setAddress(input),
      },
      "plain-text",
    ]);
  };
  return (
    <View style={styles.container}>
      <StatusBar style="light" />
      <View style={styles.header}>
        <View style={[styles.row, { marginTop: 70 }]}>
          <Text style={styles.address}>Delivery address</Text>
          <Text style={styles.address}>Within</Text>
        </View>
        <View style={[styles.row, , { marginTop: 8 }]}>
          <Pressable
            onPressIn={() => setIsPressed(true)}
            onPressOut={() => setIsPressed(false)}
            onPress={showAlertWithInput}
          >
            <Text
              style={[
                styles.address,
                { fontWeight: "bold" },
                isPressed && { color: "lightgray" },
              ]}
            >
              {address}
            </Text>
          </Pressable>
          <Text style={[styles.address, { fontWeight: "bold" }]}>
            {time} Min
          </Text>
        </View>
      </View>
      <View style={styles.currency}>
        <Text style={styles.currencyText}>1 USD = {1 * LBP} </Text>
      </View>
      <View style={{ flex: 1, padding: 10 }}>
        <ScrollView>
          <View style={styles.row}>
            <ItemView name="Sitos" Item={Items[0]} cost={0.57} LBP={LBP} />
            <ItemView name="Sitos" Item={Items[1]} cost={0.57} LBP={LBP} />
            <ItemView name="Sitos" Item={Items[2]} cost={0.57} LBP={LBP} />
          </View>
          <View style={styles.row}>
            <ItemView name="Sitos" Item={Items[3]} cost={0.57} LBP={LBP} />
          <Cmodal></Cmodal>
          </View>
        
        </ScrollView>
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "white",
  },
  header: {
    backgroundColor: "#5DADF8",
    height: 150,
    padding: 15,
    justifyContent: "center",
  },
  address: {
    color: "white",
    fontSize: 15,
  },
  row: {
    flexDirection: "row",
    justifyContent: "space-between",
    width: "auto",
  },
  currency: {
    backgroundColor: "white",
    shadowColor: "#000",
    shadowOffset: { width: 0, height: 2 },
    shadowOpacity: 0.25,
    shadowRadius: 3.84,
    elevation: 5,
    flexDirection: "row",
    justifyContent: "center",
    alignItems: "center",
    width: "auto",
    paddingHorizontal: 20,
  },
  currencyText: {
    fontSize: 12,
    fontWeight: "bold",
    color: "#5DADF8",
  },

});
