// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EYDebugMenuShortcutKeyCheckType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYDebugMenuShortcutKeyCheckType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EYDebugMenuShortcutKeyCheckType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EYDebugMenuShortcutKeyCheckType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EYDebugMenuShortcutKeyCheckType, Z_Construct_UPackage__Script_yDebug(), TEXT("EYDebugMenuShortcutKeyCheckType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EYDebugMenuShortcutKeyCheckType>()
	{
		return EYDebugMenuShortcutKeyCheckType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYDebugMenuShortcutKeyCheckType(EYDebugMenuShortcutKeyCheckType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EYDebugMenuShortcutKeyCheckType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EYDebugMenuShortcutKeyCheckType_Hash() { return 2756533541U; }
	UEnum* Z_Construct_UEnum_yDebug_EYDebugMenuShortcutKeyCheckType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYDebugMenuShortcutKeyCheckType"), 0, Get_Z_Construct_UEnum_yDebug_EYDebugMenuShortcutKeyCheckType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYDebugMenuShortcutKeyCheckType::KeyDown", (int64)EYDebugMenuShortcutKeyCheckType::KeyDown },
				{ "EYDebugMenuShortcutKeyCheckType::LongPress_0_5sec", (int64)EYDebugMenuShortcutKeyCheckType::LongPress_0_5sec },
				{ "EYDebugMenuShortcutKeyCheckType::LongPress_1sec", (int64)EYDebugMenuShortcutKeyCheckType::LongPress_1sec },
				{ "EYDebugMenuShortcutKeyCheckType::LongPress_1_5sec", (int64)EYDebugMenuShortcutKeyCheckType::LongPress_1_5sec },
				{ "EYDebugMenuShortcutKeyCheckType::LongPress_2sec", (int64)EYDebugMenuShortcutKeyCheckType::LongPress_2sec },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "KeyDown.Name", "EYDebugMenuShortcutKeyCheckType::KeyDown" },
				{ "LongPress_0_5sec.Name", "EYDebugMenuShortcutKeyCheckType::LongPress_0_5sec" },
				{ "LongPress_1_5sec.Name", "EYDebugMenuShortcutKeyCheckType::LongPress_1_5sec" },
				{ "LongPress_1sec.Name", "EYDebugMenuShortcutKeyCheckType::LongPress_1sec" },
				{ "LongPress_2sec.Name", "EYDebugMenuShortcutKeyCheckType::LongPress_2sec" },
				{ "ModuleRelativePath", "Public/EYDebugMenuShortcutKeyCheckType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EYDebugMenuShortcutKeyCheckType",
				"EYDebugMenuShortcutKeyCheckType",
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
