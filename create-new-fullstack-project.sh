echo "project name"
read name
mkdir ~/draft/$name && pushd ~/draft/$name
temp = $name + "app"
sudo npx create-expo-app $temp --template blank
temp = $name + "backend"
sudo npx create-next-app@latest $temp


