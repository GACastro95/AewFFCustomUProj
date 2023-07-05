// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/FYDebugMenuNotifyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFYDebugMenuNotifyType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuNotifyType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* FYDebugMenuNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_FYDebugMenuNotifyType, Z_Construct_UPackage__Script_yDebug(), TEXT("FYDebugMenuNotifyType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<FYDebugMenuNotifyType>()
	{
		return FYDebugMenuNotifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FYDebugMenuNotifyType(FYDebugMenuNotifyType_StaticEnum, TEXT("/Script/yDebug"), TEXT("FYDebugMenuNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_FYDebugMenuNotifyType_Hash() { return 756993227U; }
	UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FYDebugMenuNotifyType"), 0, Get_Z_Construct_UEnum_yDebug_FYDebugMenuNotifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FYDebugMenuNotifyType::None", (int64)FYDebugMenuNotifyType::None },
				{ "FYDebugMenuNotifyType::OnSetup", (int64)FYDebugMenuNotifyType::OnSetup },
				{ "FYDebugMenuNotifyType::OnReset", (int64)FYDebugMenuNotifyType::OnReset },
				{ "FYDebugMenuNotifyType::OnClick", (int64)FYDebugMenuNotifyType::OnClick },
				{ "FYDebugMenuNotifyType::OnValueChanged", (int64)FYDebugMenuNotifyType::OnValueChanged },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FYDebugMenuNotifyType.h" },
				{ "None.Name", "FYDebugMenuNotifyType::None" },
				{ "OnClick.Name", "FYDebugMenuNotifyType::OnClick" },
				{ "OnReset.Name", "FYDebugMenuNotifyType::OnReset" },
				{ "OnSetup.Name", "FYDebugMenuNotifyType::OnSetup" },
				{ "OnValueChanged.Name", "FYDebugMenuNotifyType::OnValueChanged" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"FYDebugMenuNotifyType",
				"FYDebugMenuNotifyType",
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
