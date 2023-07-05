// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/FYDebugMenuDialogButtonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFYDebugMenuDialogButtonType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* FYDebugMenuDialogButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType, Z_Construct_UPackage__Script_yDebug(), TEXT("FYDebugMenuDialogButtonType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<FYDebugMenuDialogButtonType>()
	{
		return FYDebugMenuDialogButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FYDebugMenuDialogButtonType(FYDebugMenuDialogButtonType_StaticEnum, TEXT("/Script/yDebug"), TEXT("FYDebugMenuDialogButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType_Hash() { return 1467983346U; }
	UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FYDebugMenuDialogButtonType"), 0, Get_Z_Construct_UEnum_yDebug_FYDebugMenuDialogButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FYDebugMenuDialogButtonType::OK", (int64)FYDebugMenuDialogButtonType::OK },
				{ "FYDebugMenuDialogButtonType::OK_Cancel", (int64)FYDebugMenuDialogButtonType::OK_Cancel },
				{ "FYDebugMenuDialogButtonType::YES_NO", (int64)FYDebugMenuDialogButtonType::YES_NO },
				{ "FYDebugMenuDialogButtonType::YES_NO_Cancel", (int64)FYDebugMenuDialogButtonType::YES_NO_Cancel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FYDebugMenuDialogButtonType.h" },
				{ "OK.Name", "FYDebugMenuDialogButtonType::OK" },
				{ "OK_Cancel.Name", "FYDebugMenuDialogButtonType::OK_Cancel" },
				{ "YES_NO.Name", "FYDebugMenuDialogButtonType::YES_NO" },
				{ "YES_NO_Cancel.Name", "FYDebugMenuDialogButtonType::YES_NO_Cancel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"FYDebugMenuDialogButtonType",
				"FYDebugMenuDialogButtonType",
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
