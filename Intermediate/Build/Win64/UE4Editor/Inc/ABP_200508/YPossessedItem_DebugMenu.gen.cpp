// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YPossessedItem_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYPossessedItem_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYPossessedItem_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYPossessedItem_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UYPossessedItem_DebugMenu::execOnUpdatePossessedItemQuantity)
	{
		P_GET_UBOOL(Z_Param_peek);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePossessedItemQuantity(Z_Param_peek);
		P_NATIVE_END;
	}
	void UYPossessedItem_DebugMenu::StaticRegisterNativesUYPossessedItem_DebugMenu()
	{
		UClass* Class = UYPossessedItem_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpdatePossessedItemQuantity", &UYPossessedItem_DebugMenu::execOnUpdatePossessedItemQuantity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics
	{
		struct YPossessedItem_DebugMenu_eventOnUpdatePossessedItemQuantity_Parms
		{
			bool peek;
		};
		static void NewProp_peek_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_peek;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::NewProp_peek_SetBit(void* Obj)
	{
		((YPossessedItem_DebugMenu_eventOnUpdatePossessedItemQuantity_Parms*)Obj)->peek = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::NewProp_peek = { "peek", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YPossessedItem_DebugMenu_eventOnUpdatePossessedItemQuantity_Parms), &Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::NewProp_peek_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::NewProp_peek,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YPossessedItem_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYPossessedItem_DebugMenu, nullptr, "OnUpdatePossessedItemQuantity", nullptr, nullptr, sizeof(YPossessedItem_DebugMenu_eventOnUpdatePossessedItemQuantity_Parms), Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYPossessedItem_DebugMenu_NoRegister()
	{
		return UYPossessedItem_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYPossessedItem_DebugMenu_OnUpdatePossessedItemQuantity, "OnUpdatePossessedItemQuantity" }, // 330792014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YPossessedItem_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YPossessedItem_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYPossessedItem_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::ClassParams = {
		&UYPossessedItem_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYPossessedItem_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYPossessedItem_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYPossessedItem_DebugMenu, 1748650948);
	template<> ABP_200508_API UClass* StaticClass<UYPossessedItem_DebugMenu>()
	{
		return UYPossessedItem_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYPossessedItem_DebugMenu(Z_Construct_UClass_UYPossessedItem_DebugMenu, &UYPossessedItem_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYPossessedItem_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYPossessedItem_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
