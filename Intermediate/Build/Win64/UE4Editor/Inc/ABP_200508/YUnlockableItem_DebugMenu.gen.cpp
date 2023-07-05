// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YUnlockableItem_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYUnlockableItem_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYUnlockableItem_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYUnlockableItem_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYUnlockableItem_DebugMenu::execExecuteAllUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAllUnlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYUnlockableItem_DebugMenu::execExecuteAllUnlockCore)
	{
		P_GET_OBJECT(UELUnlockableItemManagerBase,Z_Param_ItemManagerBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAllUnlockCore(Z_Param_ItemManagerBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYUnlockableItem_DebugMenu::execExecuteRevertDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteRevertDefault();
		P_NATIVE_END;
	}
	void UYUnlockableItem_DebugMenu::StaticRegisterNativesUYUnlockableItem_DebugMenu()
	{
		UClass* Class = UYUnlockableItem_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAllUnlock", &UYUnlockableItem_DebugMenu::execExecuteAllUnlock },
			{ "ExecuteAllUnlockCore", &UYUnlockableItem_DebugMenu::execExecuteAllUnlockCore },
			{ "ExecuteRevertDefault", &UYUnlockableItem_DebugMenu::execExecuteRevertDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YUnlockableItem_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYUnlockableItem_DebugMenu, nullptr, "ExecuteAllUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics
	{
		struct YUnlockableItem_DebugMenu_eventExecuteAllUnlockCore_Parms
		{
			UELUnlockableItemManagerBase* ItemManagerBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemManagerBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::NewProp_ItemManagerBase = { "ItemManagerBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YUnlockableItem_DebugMenu_eventExecuteAllUnlockCore_Parms, ItemManagerBase), Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::NewProp_ItemManagerBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YUnlockableItem_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYUnlockableItem_DebugMenu, nullptr, "ExecuteAllUnlockCore", nullptr, nullptr, sizeof(YUnlockableItem_DebugMenu_eventExecuteAllUnlockCore_Parms), Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YUnlockableItem_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYUnlockableItem_DebugMenu, nullptr, "ExecuteRevertDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYUnlockableItem_DebugMenu_NoRegister()
	{
		return UYUnlockableItem_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlock, "ExecuteAllUnlock" }, // 197401988
		{ &Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteAllUnlockCore, "ExecuteAllUnlockCore" }, // 4159405535
		{ &Z_Construct_UFunction_UYUnlockableItem_DebugMenu_ExecuteRevertDefault, "ExecuteRevertDefault" }, // 32207839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YUnlockableItem_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YUnlockableItem_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYUnlockableItem_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::ClassParams = {
		&UYUnlockableItem_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYUnlockableItem_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYUnlockableItem_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYUnlockableItem_DebugMenu, 2312412358);
	template<> ABP_200508_API UClass* StaticClass<UYUnlockableItem_DebugMenu>()
	{
		return UYUnlockableItem_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYUnlockableItem_DebugMenu(Z_Construct_UClass_UYUnlockableItem_DebugMenu, &UYUnlockableItem_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYUnlockableItem_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYUnlockableItem_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
