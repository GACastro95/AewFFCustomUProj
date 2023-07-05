// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlayerOptionBooleanOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlayerOptionBooleanOverride() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaPlayerOptionBooleanOverride_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlayerOptionBooleanOverride"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerOptionBooleanOverride>()
	{
		return EManaPlayerOptionBooleanOverride_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaPlayerOptionBooleanOverride(EManaPlayerOptionBooleanOverride_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaPlayerOptionBooleanOverride"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Hash() { return 2718594751U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaPlayerOptionBooleanOverride"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaPlayerOptionBooleanOverride::UseManaPlayerSetting", (int64)EManaPlayerOptionBooleanOverride::UseManaPlayerSetting },
				{ "EManaPlayerOptionBooleanOverride::Enabled", (int64)EManaPlayerOptionBooleanOverride::Enabled },
				{ "EManaPlayerOptionBooleanOverride::Disabled", (int64)EManaPlayerOptionBooleanOverride::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "EManaPlayerOptionBooleanOverride::Disabled" },
				{ "Enabled.Name", "EManaPlayerOptionBooleanOverride::Enabled" },
				{ "ModuleRelativePath", "Public/EManaPlayerOptionBooleanOverride.h" },
				{ "UseManaPlayerSetting.Name", "EManaPlayerOptionBooleanOverride::UseManaPlayerSetting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaPlayerOptionBooleanOverride",
				"EManaPlayerOptionBooleanOverride",
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
