// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EGameLiftMatchMakeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameLiftMatchMakeState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EGameLiftMatchMakeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EGameLiftMatchMakeState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EGameLiftMatchMakeState>()
	{
		return EGameLiftMatchMakeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameLiftMatchMakeState(EGameLiftMatchMakeState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EGameLiftMatchMakeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState_Hash() { return 190272442U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameLiftMatchMakeState"), 0, Get_Z_Construct_UEnum_ABP_200508_EGameLiftMatchMakeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_Begin", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_Begin },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_SearchSession", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_SearchSession },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_NewSession", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_NewSession },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinGameSession", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinGameSession },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinPlayerSession", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinPlayerSession },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_SessionStart", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_SessionStart },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_RandomMatching", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_RandomMatching },
				{ "EGameLiftMatchMakeState::eGameLiftMatchMakeState_MAX", (int64)EGameLiftMatchMakeState::eGameLiftMatchMakeState_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eGameLiftMatchMakeState_Begin.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_Begin" },
				{ "eGameLiftMatchMakeState_JoinGameSession.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinGameSession" },
				{ "eGameLiftMatchMakeState_JoinPlayerSession.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinPlayerSession" },
				{ "eGameLiftMatchMakeState_MAX.Hidden", "" },
				{ "eGameLiftMatchMakeState_MAX.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_MAX" },
				{ "eGameLiftMatchMakeState_NewSession.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_NewSession" },
				{ "eGameLiftMatchMakeState_RandomMatching.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_RandomMatching" },
				{ "eGameLiftMatchMakeState_SearchSession.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_SearchSession" },
				{ "eGameLiftMatchMakeState_SessionStart.Name", "EGameLiftMatchMakeState::eGameLiftMatchMakeState_SessionStart" },
				{ "ModuleRelativePath", "Public/EGameLiftMatchMakeState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EGameLiftMatchMakeState",
				"EGameLiftMatchMakeState",
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
