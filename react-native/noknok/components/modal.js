import { useState } from "react";
import { View, Text, ScrollView, Button, Modal } from "react-native";

export default function Cmodal() {
  const [IsModalVisible, setIsModalVisible] = useState(false);
  return (
    <View style={{ flex: 1, backgroundColor: "white", padding: 50 }}>
      <Button
        title="Modal"
        onPress={() => setIsModalVisible(true)}
        color="midnightblue"
      />
      <Modal
        visible={IsModalVisible}
        onRequestClose={() => setIsModalVisible(false)}
        animationType="slide"
        presentationStyle="pageSheet"
      >
        <View style={{ flex: 1, backgroundColor: "lightblue", padding: 60 }}>
          <ScrollView>
            <Button
              title="back"
              onPress={() => setIsModalVisible(false)}
              color="midnightblue"
            />
            <Text>
              What is Lorem Ipsum? Lorem Ipsum is simply dummy text of the
            </Text>
          </ScrollView>
        </View>
      </Modal>
    </View>
  );
}
