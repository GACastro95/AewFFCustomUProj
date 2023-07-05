// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EYDebugMenu_MenuType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYDebugMenu_MenuType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EYDebugMenu_MenuType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EYDebugMenu_MenuType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EYDebugMenu_MenuType, Z_Construct_UPackage__Script_yDebug(), TEXT("EYDebugMenu_MenuType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EYDebugMenu_MenuType>()
	{
		return EYDebugMenu_MenuType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYDebugMenu_MenuType(EYDebugMenu_MenuType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EYDebugMenu_MenuType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EYDebugMenu_MenuType_Hash() { return 4279449597U; }
	UEnum* Z_Construct_UEnum_yDebug_EYDebugMenu_MenuType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYDebugMenu_MenuType"), 0, Get_Z_Construct_UEnum_yDebug_EYDebugMenu_MenuType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYDebugMenu_MenuType::None", (int64)EYDebugMenu_MenuType::None },
				{ "EYDebugMenu_MenuType::MenuBar", (int64)EYDebugMenu_MenuType::MenuBar },
				{ "EYDebugMenu_MenuType::ContextMenu", (int64)EYDebugMenu_MenuType::ContextMenu },
				{ "EYDebugMenu_MenuType::EYDebugMenu_MAX", (int64)EYDebugMenu_MenuType::EYDebugMenu_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ContextMenu.Name", "EYDebugMenu_MenuType::ContextMenu" },
				{ "EYDebugMenu_MAX.Hidden", "" },
				{ "EYDebugMenu_MAX.Name", "EYDebugMenu_MenuType::EYDebugMenu_MAX" },
				{ "MenuBar.Name", "EYDebugMenu_MenuType::MenuBar" },
				{ "ModuleRelativePath", "Public/EYDebugMenu_MenuType.h" },
				{ "None.Name", "EYDebugMenu_MenuType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EYDebugMenu_MenuType",
				"EYDebugMenu_MenuType",
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
