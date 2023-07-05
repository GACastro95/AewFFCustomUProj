// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSLobbyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSLobbyState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSLobbyState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSLobbyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSLobbyState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSLobbyState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSLobbyState>()
	{
		return eSSLobbyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSLobbyState(eSSLobbyState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSLobbyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSLobbyState_Hash() { return 631385749U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSLobbyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSLobbyState"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSLobbyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSLobbyState::eSSLobbyState_None", (int64)eSSLobbyState::eSSLobbyState_None },
				{ "eSSLobbyState::eSSLobbyState_LobbyCheck", (int64)eSSLobbyState::eSSLobbyState_LobbyCheck },
				{ "eSSLobbyState::eSSLobbyState_GameStart", (int64)eSSLobbyState::eSSLobbyState_GameStart },
				{ "eSSLobbyState::eSSLobbyState_HotTestSetup", (int64)eSSLobbyState::eSSLobbyState_HotTestSetup },
				{ "eSSLobbyState::eSSLobbyState_HotPlayer", (int64)eSSLobbyState::eSSLobbyState_HotPlayer },
				{ "eSSLobbyState::eSSLobbyState_END", (int64)eSSLobbyState::eSSLobbyState_END },
				{ "eSSLobbyState::eSSLobbyState_EmptyLobby", (int64)eSSLobbyState::eSSLobbyState_EmptyLobby },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSLobbyState_EmptyLobby.Name", "eSSLobbyState::eSSLobbyState_EmptyLobby" },
				{ "eSSLobbyState_END.Name", "eSSLobbyState::eSSLobbyState_END" },
				{ "eSSLobbyState_GameStart.Name", "eSSLobbyState::eSSLobbyState_GameStart" },
				{ "eSSLobbyState_HotPlayer.Name", "eSSLobbyState::eSSLobbyState_HotPlayer" },
				{ "eSSLobbyState_HotTestSetup.Name", "eSSLobbyState::eSSLobbyState_HotTestSetup" },
				{ "eSSLobbyState_LobbyCheck.Name", "eSSLobbyState::eSSLobbyState_LobbyCheck" },
				{ "eSSLobbyState_None.Name", "eSSLobbyState::eSSLobbyState_None" },
				{ "ModuleRelativePath", "Public/eSSLobbyState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSLobbyState",
				"eSSLobbyState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
