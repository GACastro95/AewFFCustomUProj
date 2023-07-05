// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomLoopSettingID_DEPRECEATED.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomLoopSettingID_DEPRECEATED() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomLoopSettingID_DEPRECEATED_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomLoopSettingID_DEPRECEATED"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSettingID_DEPRECEATED>()
	{
		return EAtomLoopSettingID_DEPRECEATED_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomLoopSettingID_DEPRECEATED(EAtomLoopSettingID_DEPRECEATED_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomLoopSettingID_DEPRECEATED"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Hash() { return 3424469465U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomLoopSettingID_DEPRECEATED"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED },
				{ "EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED },
				{ "EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED },
				{ "EAtomLoopSettingID_DEPRECEATED::EAtomLoopSettingID_MAX", (int64)EAtomLoopSettingID_DEPRECEATED::EAtomLoopSettingID_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DefaultLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED" },
				{ "EAtomLoopSettingID_MAX.Hidden", "" },
				{ "EAtomLoopSettingID_MAX.Name", "EAtomLoopSettingID_DEPRECEATED::EAtomLoopSettingID_MAX" },
				{ "ForceLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED" },
				{ "IgnoreLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED" },
				{ "ModuleRelativePath", "Public/EAtomLoopSettingID_DEPRECEATED.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomLoopSettingID_DEPRECEATED",
				"EAtomLoopSettingID_DEPRECEATED",
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
