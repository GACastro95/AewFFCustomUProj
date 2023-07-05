// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yAchievement_Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyAchievement_Menu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UyAchievement_Menu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UyAchievement_Menu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UyAchievement_Menu::execIsEnableAchievementMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableAchievementMenu();
		P_NATIVE_END;
	}
	void UyAchievement_Menu::StaticRegisterNativesUyAchievement_Menu()
	{
		UClass* Class = UyAchievement_Menu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnableAchievementMenu", &UyAchievement_Menu::execIsEnableAchievementMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics
	{
		struct yAchievement_Menu_eventIsEnableAchievementMenu_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((yAchievement_Menu_eventIsEnableAchievementMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(yAchievement_Menu_eventIsEnableAchievementMenu_Parms), &Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/yAchievement_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UyAchievement_Menu, nullptr, "IsEnableAchievementMenu", nullptr, nullptr, sizeof(yAchievement_Menu_eventIsEnableAchievementMenu_Parms), Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UyAchievement_Menu_NoRegister()
	{
		return UyAchievement_Menu::StaticClass();
	}
	struct Z_Construct_UClass_UyAchievement_Menu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UyAchievement_Menu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UyAchievement_Menu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UyAchievement_Menu_IsEnableAchievementMenu, "IsEnableAchievementMenu" }, // 3745751827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UyAchievement_Menu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "yAchievement_Menu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/yAchievement_Menu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UyAchievement_Menu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UyAchievement_Menu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UyAchievement_Menu_Statics::ClassParams = {
		&UyAchievement_Menu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UyAchievement_Menu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UyAchievement_Menu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UyAchievement_Menu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UyAchievement_Menu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UyAchievement_Menu, 42217405);
	template<> ABP_200508_API UClass* StaticClass<UyAchievement_Menu>()
	{
		return UyAchievement_Menu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UyAchievement_Menu(Z_Construct_UClass_UyAchievement_Menu, &UyAchievement_Menu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UyAchievement_Menu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UyAchievement_Menu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
