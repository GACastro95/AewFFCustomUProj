// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSMatchMakeUIState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSMatchMakeUIState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMatchMakeUIState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSMatchMakeUIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSMatchMakeUIState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSMatchMakeUIState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSMatchMakeUIState>()
	{
		return ESSMatchMakeUIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSMatchMakeUIState(ESSMatchMakeUIState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSMatchMakeUIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSMatchMakeUIState_Hash() { return 3637081476U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSMatchMakeUIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSMatchMakeUIState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSMatchMakeUIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSMatchMakeUIState::Default", (int64)ESSMatchMakeUIState::Default },
				{ "ESSMatchMakeUIState::Matching", (int64)ESSMatchMakeUIState::Matching },
				{ "ESSMatchMakeUIState::MatchingWithCancel", (int64)ESSMatchMakeUIState::MatchingWithCancel },
				{ "ESSMatchMakeUIState::Canceling", (int64)ESSMatchMakeUIState::Canceling },
				{ "ESSMatchMakeUIState::ConnectToMatch", (int64)ESSMatchMakeUIState::ConnectToMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Canceling.Name", "ESSMatchMakeUIState::Canceling" },
				{ "ConnectToMatch.Name", "ESSMatchMakeUIState::ConnectToMatch" },
				{ "Default.Name", "ESSMatchMakeUIState::Default" },
				{ "Matching.Name", "ESSMatchMakeUIState::Matching" },
				{ "MatchingWithCancel.Name", "ESSMatchMakeUIState::MatchingWithCancel" },
				{ "ModuleRelativePath", "Public/ESSMatchMakeUIState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSMatchMakeUIState",
				"ESSMatchMakeUIState",
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
