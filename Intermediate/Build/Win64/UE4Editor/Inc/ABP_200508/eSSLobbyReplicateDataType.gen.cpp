// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSLobbyReplicateDataType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSLobbyReplicateDataType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSLobbyReplicateDataType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSLobbyReplicateDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSLobbyReplicateDataType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSLobbyReplicateDataType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSLobbyReplicateDataType>()
	{
		return eSSLobbyReplicateDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSLobbyReplicateDataType(eSSLobbyReplicateDataType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSLobbyReplicateDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSLobbyReplicateDataType_Hash() { return 903304138U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSLobbyReplicateDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSLobbyReplicateDataType"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSLobbyReplicateDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_LobbyState", (int64)eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_LobbyState },
				{ "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_StartTime", (int64)eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_StartTime },
				{ "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_CountPlayer", (int64)eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_CountPlayer },
				{ "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_CountNPC", (int64)eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_CountNPC },
				{ "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_LobbyData", (int64)eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_LobbyData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSLobbyReplicateDataType_CountNPC.Name", "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_CountNPC" },
				{ "eSSLobbyReplicateDataType_CountPlayer.Name", "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_CountPlayer" },
				{ "eSSLobbyReplicateDataType_LobbyData.Name", "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_LobbyData" },
				{ "eSSLobbyReplicateDataType_LobbyState.Name", "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_LobbyState" },
				{ "eSSLobbyReplicateDataType_StartTime.Name", "eSSLobbyReplicateDataType::eSSLobbyReplicateDataType_StartTime" },
				{ "ModuleRelativePath", "Public/eSSLobbyReplicateDataType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSLobbyReplicateDataType",
				"eSSLobbyReplicateDataType",
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
