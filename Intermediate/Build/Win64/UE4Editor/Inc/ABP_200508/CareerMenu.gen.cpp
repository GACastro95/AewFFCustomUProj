// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMenu() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMenu();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerMenu>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerMenu cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerMenu::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMenu_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMenu, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMenu"), sizeof(FCareerMenu), Get_Z_Construct_UScriptStruct_FCareerMenu_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMenu>()
{
	return FCareerMenu::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMenu(FCareerMenu::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMenu"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMenu
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMenu()
	{
		UScriptStruct::DeferCppStructOps<FCareerMenu>(FName(TEXT("CareerMenu")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMenu;
	struct Z_Construct_UScriptStruct_FCareerMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_City_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_City_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_City;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_E_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_E;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_F;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItem_H_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuItem_H;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_E_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_E;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_F;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnSelectableItem_H_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnSelectableItem_H;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMenu_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMenu>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, City), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_A = { "MenuItem_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_B = { "MenuItem_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_C = { "MenuItem_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_D = { "MenuItem_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_E_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_E = { "MenuItem_E", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_E), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_E_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_F_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_F = { "MenuItem_F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_F), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_F_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_G_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_G = { "MenuItem_G", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_G), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_H_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_H = { "MenuItem_H", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, MenuItem_H), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_H_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_H_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_A = { "UnSelectableItem_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_B = { "UnSelectableItem_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_C = { "UnSelectableItem_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_D = { "UnSelectableItem_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_E_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_E = { "UnSelectableItem_E", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_E), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_E_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_F_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_F = { "UnSelectableItem_F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_F), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_F_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_G_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_G = { "UnSelectableItem_G", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_G), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_H_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenu" },
		{ "ModuleRelativePath", "Public/CareerMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_H = { "UnSelectableItem_H", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenu, UnSelectableItem_H), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_H_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_H_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_City,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_E,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_F,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_MenuItem_H,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_E,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_F,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenu_Statics::NewProp_UnSelectableItem_H,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMenu_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerMenu",
		sizeof(FCareerMenu),
		alignof(FCareerMenu),
		Z_Construct_UScriptStruct_FCareerMenu_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenu_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenu_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMenu()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMenu_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMenu"), sizeof(FCareerMenu), Get_Z_Construct_UScriptStruct_FCareerMenu_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMenu_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMenu_Hash() { return 3532262413U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
