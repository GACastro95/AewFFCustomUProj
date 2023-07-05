// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/InGameMovesPreviewMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMovesPreviewMenu() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UInGameMovesPreviewMenu_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UInGameMovesPreviewMenu();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_ButtonClick_Delegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UInGameMovesPreviewMenu::execChangeSequentialExecution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSequentialExecution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMovesPreviewMenu::execGetSelectIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMovesPreviewMenu::execInitializeMenu)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__ComboBoxKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMenu(Z_Param_Out__ComboBoxKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMovesPreviewMenu::execIsSequentialExecution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSequentialExecution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMovesPreviewMenu::execSetSelectIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__SelectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectIndex(Z_Param__SelectIndex);
		P_NATIVE_END;
	}
	void UInGameMovesPreviewMenu::StaticRegisterNativesUInGameMovesPreviewMenu()
	{
		UClass* Class = UInGameMovesPreviewMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSequentialExecution", &UInGameMovesPreviewMenu::execChangeSequentialExecution },
			{ "GetSelectIndex", &UInGameMovesPreviewMenu::execGetSelectIndex },
			{ "InitializeMenu", &UInGameMovesPreviewMenu::execInitializeMenu },
			{ "IsSequentialExecution", &UInGameMovesPreviewMenu::execIsSequentialExecution },
			{ "SetSelectIndex", &UInGameMovesPreviewMenu::execSetSelectIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMovesPreviewMenu, nullptr, "ChangeSequentialExecution", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics
	{
		struct InGameMovesPreviewMenu_eventGetSelectIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameMovesPreviewMenu_eventGetSelectIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMovesPreviewMenu, nullptr, "GetSelectIndex", nullptr, nullptr, sizeof(InGameMovesPreviewMenu_eventGetSelectIndex_Parms), Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics
	{
		struct InGameMovesPreviewMenu_eventInitializeMenu_Parms
		{
			TArray<FString> _ComboBoxKeys;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__ComboBoxKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ComboBoxKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ComboBoxKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys_Inner = { "_ComboBoxKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys = { "_ComboBoxKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameMovesPreviewMenu_eventInitializeMenu_Parms, _ComboBoxKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::NewProp__ComboBoxKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMovesPreviewMenu, nullptr, "InitializeMenu", nullptr, nullptr, sizeof(InGameMovesPreviewMenu_eventInitializeMenu_Parms), Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics
	{
		struct InGameMovesPreviewMenu_eventIsSequentialExecution_Parms
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
	void Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InGameMovesPreviewMenu_eventIsSequentialExecution_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InGameMovesPreviewMenu_eventIsSequentialExecution_Parms), &Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMovesPreviewMenu, nullptr, "IsSequentialExecution", nullptr, nullptr, sizeof(InGameMovesPreviewMenu_eventIsSequentialExecution_Parms), Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics
	{
		struct InGameMovesPreviewMenu_eventSetSelectIndex_Parms
		{
			int32 _SelectIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SelectIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::NewProp__SelectIndex = { "_SelectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameMovesPreviewMenu_eventSetSelectIndex_Parms, _SelectIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::NewProp__SelectIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMovesPreviewMenu, nullptr, "SetSelectIndex", nullptr, nullptr, sizeof(InGameMovesPreviewMenu_eventSetSelectIndex_Parms), Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInGameMovesPreviewMenu_NoRegister()
	{
		return UInGameMovesPreviewMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInGameMovesPreviewMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonClick_Dispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ButtonClick_Dispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameMovesPreviewMenu_ChangeSequentialExecution, "ChangeSequentialExecution" }, // 3569319663
		{ &Z_Construct_UFunction_UInGameMovesPreviewMenu_GetSelectIndex, "GetSelectIndex" }, // 3698757989
		{ &Z_Construct_UFunction_UInGameMovesPreviewMenu_InitializeMenu, "InitializeMenu" }, // 2050652487
		{ &Z_Construct_UFunction_UInGameMovesPreviewMenu_IsSequentialExecution, "IsSequentialExecution" }, // 2941548478
		{ &Z_Construct_UFunction_UInGameMovesPreviewMenu_SetSelectIndex, "SetSelectIndex" }, // 2341002641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InGameMovesPreviewMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::NewProp_ButtonClick_Dispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InGameMovesPreviewMenu" },
		{ "ModuleRelativePath", "Public/InGameMovesPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::NewProp_ButtonClick_Dispatcher = { "ButtonClick_Dispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameMovesPreviewMenu, ButtonClick_Dispatcher), Z_Construct_UDelegateFunction_ELITE_ButtonClick_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::NewProp_ButtonClick_Dispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::NewProp_ButtonClick_Dispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::NewProp_ButtonClick_Dispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameMovesPreviewMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::ClassParams = {
		&UInGameMovesPreviewMenu::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameMovesPreviewMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameMovesPreviewMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameMovesPreviewMenu, 1928118019);
	template<> ELITE_API UClass* StaticClass<UInGameMovesPreviewMenu>()
	{
		return UInGameMovesPreviewMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameMovesPreviewMenu(Z_Construct_UClass_UInGameMovesPreviewMenu, &UInGameMovesPreviewMenu::StaticClass, TEXT("/Script/ELITE"), TEXT("UInGameMovesPreviewMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameMovesPreviewMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
