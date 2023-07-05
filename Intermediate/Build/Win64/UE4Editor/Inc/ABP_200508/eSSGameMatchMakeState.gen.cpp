// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSGameMatchMakeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSGameMatchMakeState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSGameMatchMakeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSGameMatchMakeState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSGameMatchMakeState>()
	{
		return eSSGameMatchMakeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSGameMatchMakeState(eSSGameMatchMakeState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSGameMatchMakeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState_Hash() { return 1459451588U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSGameMatchMakeState"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSGameMatchMakeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Stay", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Stay },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_MatchMake", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_MatchMake },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_MatchCheck", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_MatchCheck },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_MatchUpdate", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_MatchUpdate },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_TimeOut", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_TimeOut },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_StartCancel", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_StartCancel },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Cancel", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Cancel },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_CancelFailed", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_CancelFailed },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Placing", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Placing },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Active", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Active },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Error", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Error },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Restart", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Restart },
				{ "eSSGameMatchMakeState::eSSGameMatchMakeState_Failed", (int64)eSSGameMatchMakeState::eSSGameMatchMakeState_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSGameMatchMakeState_Active.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Active" },
				{ "eSSGameMatchMakeState_Cancel.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Cancel" },
				{ "eSSGameMatchMakeState_CancelFailed.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_CancelFailed" },
				{ "eSSGameMatchMakeState_Error.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Error" },
				{ "eSSGameMatchMakeState_Failed.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Failed" },
				{ "eSSGameMatchMakeState_MatchCheck.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_MatchCheck" },
				{ "eSSGameMatchMakeState_MatchMake.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_MatchMake" },
				{ "eSSGameMatchMakeState_MatchUpdate.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_MatchUpdate" },
				{ "eSSGameMatchMakeState_Placing.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Placing" },
				{ "eSSGameMatchMakeState_Restart.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Restart" },
				{ "eSSGameMatchMakeState_StartCancel.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_StartCancel" },
				{ "eSSGameMatchMakeState_Stay.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_Stay" },
				{ "eSSGameMatchMakeState_TimeOut.Name", "eSSGameMatchMakeState::eSSGameMatchMakeState_TimeOut" },
				{ "ModuleRelativePath", "Public/eSSGameMatchMakeState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSGameMatchMakeState",
				"eSSGameMatchMakeState",
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
