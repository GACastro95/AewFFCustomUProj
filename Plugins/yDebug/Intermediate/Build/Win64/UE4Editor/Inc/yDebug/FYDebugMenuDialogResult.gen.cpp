// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/FYDebugMenuDialogResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFYDebugMenuDialogResult() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* FYDebugMenuDialogResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult, Z_Construct_UPackage__Script_yDebug(), TEXT("FYDebugMenuDialogResult"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<FYDebugMenuDialogResult>()
	{
		return FYDebugMenuDialogResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FYDebugMenuDialogResult(FYDebugMenuDialogResult_StaticEnum, TEXT("/Script/yDebug"), TEXT("FYDebugMenuDialogResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult_Hash() { return 2188153151U; }
	UEnum* Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FYDebugMenuDialogResult"), 0, Get_Z_Construct_UEnum_yDebug_FYDebugMenuDialogResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FYDebugMenuDialogResult::None", (int64)FYDebugMenuDialogResult::None },
				{ "FYDebugMenuDialogResult::YES_OK", (int64)FYDebugMenuDialogResult::YES_OK },
				{ "FYDebugMenuDialogResult::NO", (int64)FYDebugMenuDialogResult::NO },
				{ "FYDebugMenuDialogResult::Cancel", (int64)FYDebugMenuDialogResult::Cancel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "FYDebugMenuDialogResult::Cancel" },
				{ "ModuleRelativePath", "Public/FYDebugMenuDialogResult.h" },
				{ "NO.Name", "FYDebugMenuDialogResult::NO" },
				{ "None.Name", "FYDebugMenuDialogResult::None" },
				{ "YES_OK.Name", "FYDebugMenuDialogResult::YES_OK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"FYDebugMenuDialogResult",
				"FYDebugMenuDialogResult",
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
