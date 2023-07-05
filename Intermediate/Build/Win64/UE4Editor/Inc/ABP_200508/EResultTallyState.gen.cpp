// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EResultTallyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEResultTallyState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EResultTallyState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EResultTallyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EResultTallyState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EResultTallyState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EResultTallyState>()
	{
		return EResultTallyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResultTallyState(EResultTallyState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EResultTallyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EResultTallyState_Hash() { return 3774706194U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EResultTallyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResultTallyState"), 0, Get_Z_Construct_UEnum_ABP_200508_EResultTallyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResultTallyState::EResultTally_None", (int64)EResultTallyState::EResultTally_None },
				{ "EResultTallyState::EResultTally_Get", (int64)EResultTallyState::EResultTally_Get },
				{ "EResultTallyState::EResultTally_Success", (int64)EResultTallyState::EResultTally_Success },
				{ "EResultTallyState::EResultTally_Failed", (int64)EResultTallyState::EResultTally_Failed },
				{ "EResultTallyState::EResultTally_Skip", (int64)EResultTallyState::EResultTally_Skip },
				{ "EResultTallyState::EResultTally_NotLogin", (int64)EResultTallyState::EResultTally_NotLogin },
				{ "EResultTallyState::EResultTally_MAX", (int64)EResultTallyState::EResultTally_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EResultTally_Failed.Name", "EResultTallyState::EResultTally_Failed" },
				{ "EResultTally_Get.Name", "EResultTallyState::EResultTally_Get" },
				{ "EResultTally_MAX.Hidden", "" },
				{ "EResultTally_MAX.Name", "EResultTallyState::EResultTally_MAX" },
				{ "EResultTally_None.Name", "EResultTallyState::EResultTally_None" },
				{ "EResultTally_NotLogin.Name", "EResultTallyState::EResultTally_NotLogin" },
				{ "EResultTally_Skip.Name", "EResultTallyState::EResultTally_Skip" },
				{ "EResultTally_Success.Name", "EResultTallyState::EResultTally_Success" },
				{ "ModuleRelativePath", "Public/EResultTallyState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EResultTallyState",
				"EResultTallyState",
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
