// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMainMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMainMenuState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMainMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMainMenuState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMainMenuState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMainMenuState>()
	{
		return EMainMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuState(EMainMenuState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMainMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMainMenuState_Hash() { return 486223263U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuState"), 0, Get_Z_Construct_UEnum_ABP_200508_EMainMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuState::EMainMenuState_Start", (int64)EMainMenuState::EMainMenuState_Start },
				{ "EMainMenuState::EMainMenuState_PlayNetwork", (int64)EMainMenuState::EMainMenuState_PlayNetwork },
				{ "EMainMenuState::EMainMenuState_RecoveryData", (int64)EMainMenuState::EMainMenuState_RecoveryData },
				{ "EMainMenuState::EMainMenuState_Setup", (int64)EMainMenuState::EMainMenuState_Setup },
				{ "EMainMenuState::EMainMenuState_Error", (int64)EMainMenuState::EMainMenuState_Error },
				{ "EMainMenuState::EMainMenuState_Login", (int64)EMainMenuState::EMainMenuState_Login },
				{ "EMainMenuState::EMainMenuState_Menu", (int64)EMainMenuState::EMainMenuState_Menu },
				{ "EMainMenuState::EMainMenuState_End", (int64)EMainMenuState::EMainMenuState_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMainMenuState_End.Name", "EMainMenuState::EMainMenuState_End" },
				{ "EMainMenuState_Error.Name", "EMainMenuState::EMainMenuState_Error" },
				{ "EMainMenuState_Login.Name", "EMainMenuState::EMainMenuState_Login" },
				{ "EMainMenuState_Menu.Name", "EMainMenuState::EMainMenuState_Menu" },
				{ "EMainMenuState_PlayNetwork.Name", "EMainMenuState::EMainMenuState_PlayNetwork" },
				{ "EMainMenuState_RecoveryData.Name", "EMainMenuState::EMainMenuState_RecoveryData" },
				{ "EMainMenuState_Setup.Name", "EMainMenuState::EMainMenuState_Setup" },
				{ "EMainMenuState_Start.Name", "EMainMenuState::EMainMenuState_Start" },
				{ "ModuleRelativePath", "Public/EMainMenuState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMainMenuState",
				"EMainMenuState",
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
