// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerSnapShotAnimState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerSnapShotAnimState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSnapShotAnimState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerSnapShotAnimState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerSnapShotAnimState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerSnapShotAnimState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerSnapShotAnimState>()
	{
		return ECareerSnapShotAnimState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerSnapShotAnimState(ECareerSnapShotAnimState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerSnapShotAnimState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerSnapShotAnimState_Hash() { return 3967232275U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerSnapShotAnimState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerSnapShotAnimState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerSnapShotAnimState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerSnapShotAnimState::None", (int64)ECareerSnapShotAnimState::None },
				{ "ECareerSnapShotAnimState::PlayAnim", (int64)ECareerSnapShotAnimState::PlayAnim },
				{ "ECareerSnapShotAnimState::UpdateSkelton", (int64)ECareerSnapShotAnimState::UpdateSkelton },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECareerSnapShotAnimState.h" },
				{ "None.Name", "ECareerSnapShotAnimState::None" },
				{ "PlayAnim.Name", "ECareerSnapShotAnimState::PlayAnim" },
				{ "UpdateSkelton.Name", "ECareerSnapShotAnimState::UpdateSkelton" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerSnapShotAnimState",
				"ECareerSnapShotAnimState",
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
