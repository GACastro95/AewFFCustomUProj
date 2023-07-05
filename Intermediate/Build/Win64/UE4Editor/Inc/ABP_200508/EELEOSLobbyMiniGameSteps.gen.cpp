// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSLobbyMiniGameSteps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSLobbyMiniGameSteps() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSLobbyMiniGameSteps_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSLobbyMiniGameSteps"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSLobbyMiniGameSteps>()
	{
		return EELEOSLobbyMiniGameSteps_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSLobbyMiniGameSteps(EELEOSLobbyMiniGameSteps_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSLobbyMiniGameSteps"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps_Hash() { return 2833366959U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSLobbyMiniGameSteps"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSLobbyMiniGameSteps_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSLobbyMiniGameSteps::None", (int64)EELEOSLobbyMiniGameSteps::None },
				{ "EELEOSLobbyMiniGameSteps::Setup_WaitForReceiveMiniGameInfo", (int64)EELEOSLobbyMiniGameSteps::Setup_WaitForReceiveMiniGameInfo },
				{ "EELEOSLobbyMiniGameSteps::Setup_End", (int64)EELEOSLobbyMiniGameSteps::Setup_End },
				{ "EELEOSLobbyMiniGameSteps::Select_Start", (int64)EELEOSLobbyMiniGameSteps::Select_Start },
				{ "EELEOSLobbyMiniGameSteps::Select_End", (int64)EELEOSLobbyMiniGameSteps::Select_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EELEOSLobbyMiniGameSteps.h" },
				{ "None.Name", "EELEOSLobbyMiniGameSteps::None" },
				{ "Select_End.Name", "EELEOSLobbyMiniGameSteps::Select_End" },
				{ "Select_Start.Name", "EELEOSLobbyMiniGameSteps::Select_Start" },
				{ "Setup_End.Name", "EELEOSLobbyMiniGameSteps::Setup_End" },
				{ "Setup_WaitForReceiveMiniGameInfo.Name", "EELEOSLobbyMiniGameSteps::Setup_WaitForReceiveMiniGameInfo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSLobbyMiniGameSteps",
				"EELEOSLobbyMiniGameSteps",
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
