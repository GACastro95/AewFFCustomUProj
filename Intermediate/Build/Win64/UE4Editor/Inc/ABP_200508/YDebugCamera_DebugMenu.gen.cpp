// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YDebugCamera_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugCamera_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYDebugCamera_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYDebugCamera_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraSettings();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugCamera_DebugMenu::execGetDebugCameraControllerNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDebugCameraControllerNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugCamera_DebugMenu::execIsUseDebugCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUseDebugCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugCamera_DebugMenu::execSetDebugCameraControllerNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__No);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugCameraControllerNo(Z_Param__No);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugCamera_DebugMenu::execSetup)
	{
		P_GET_STRUCT_REF(FDebugCameraSettings,Z_Param_Out__stSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out__stSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugCamera_DebugMenu::execSetUseDebugCamera)
	{
		P_GET_UBOOL(Z_Param__bHilights);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseDebugCamera(Z_Param__bHilights);
		P_NATIVE_END;
	}
	void UYDebugCamera_DebugMenu::StaticRegisterNativesUYDebugCamera_DebugMenu()
	{
		UClass* Class = UYDebugCamera_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugCameraControllerNo", &UYDebugCamera_DebugMenu::execGetDebugCameraControllerNo },
			{ "IsUseDebugCamera", &UYDebugCamera_DebugMenu::execIsUseDebugCamera },
			{ "SetDebugCameraControllerNo", &UYDebugCamera_DebugMenu::execSetDebugCameraControllerNo },
			{ "Setup", &UYDebugCamera_DebugMenu::execSetup },
			{ "SetUseDebugCamera", &UYDebugCamera_DebugMenu::execSetUseDebugCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics
	{
		struct YDebugCamera_DebugMenu_eventGetDebugCameraControllerNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugCamera_DebugMenu_eventGetDebugCameraControllerNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugCamera_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugCamera_DebugMenu, nullptr, "GetDebugCameraControllerNo", nullptr, nullptr, sizeof(YDebugCamera_DebugMenu_eventGetDebugCameraControllerNo_Parms), Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics
	{
		struct YDebugCamera_DebugMenu_eventIsUseDebugCamera_Parms
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
	void Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugCamera_DebugMenu_eventIsUseDebugCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugCamera_DebugMenu_eventIsUseDebugCamera_Parms), &Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugCamera_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugCamera_DebugMenu, nullptr, "IsUseDebugCamera", nullptr, nullptr, sizeof(YDebugCamera_DebugMenu_eventIsUseDebugCamera_Parms), Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics
	{
		struct YDebugCamera_DebugMenu_eventSetDebugCameraControllerNo_Parms
		{
			int32 _No;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::NewProp__No = { "_No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugCamera_DebugMenu_eventSetDebugCameraControllerNo_Parms, _No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::NewProp__No,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugCamera_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugCamera_DebugMenu, nullptr, "SetDebugCameraControllerNo", nullptr, nullptr, sizeof(YDebugCamera_DebugMenu_eventSetDebugCameraControllerNo_Parms), Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics
	{
		struct YDebugCamera_DebugMenu_eventSetup_Parms
		{
			FDebugCameraSettings _stSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::NewProp__stSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::NewProp__stSettings = { "_stSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugCamera_DebugMenu_eventSetup_Parms, _stSettings), Z_Construct_UScriptStruct_FDebugCameraSettings, METADATA_PARAMS(Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::NewProp__stSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::NewProp__stSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::NewProp__stSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugCamera_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugCamera_DebugMenu, nullptr, "Setup", nullptr, nullptr, sizeof(YDebugCamera_DebugMenu_eventSetup_Parms), Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics
	{
		struct YDebugCamera_DebugMenu_eventSetUseDebugCamera_Parms
		{
			bool _bHilights;
		};
		static void NewProp__bHilights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bHilights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::NewProp__bHilights_SetBit(void* Obj)
	{
		((YDebugCamera_DebugMenu_eventSetUseDebugCamera_Parms*)Obj)->_bHilights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::NewProp__bHilights = { "_bHilights", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugCamera_DebugMenu_eventSetUseDebugCamera_Parms), &Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::NewProp__bHilights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::NewProp__bHilights,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugCamera_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugCamera_DebugMenu, nullptr, "SetUseDebugCamera", nullptr, nullptr, sizeof(YDebugCamera_DebugMenu_eventSetUseDebugCamera_Parms), Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugCamera_DebugMenu_NoRegister()
	{
		return UYDebugCamera_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugCamera_DebugMenu_GetDebugCameraControllerNo, "GetDebugCameraControllerNo" }, // 35794413
		{ &Z_Construct_UFunction_UYDebugCamera_DebugMenu_IsUseDebugCamera, "IsUseDebugCamera" }, // 867038661
		{ &Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetDebugCameraControllerNo, "SetDebugCameraControllerNo" }, // 3640370589
		{ &Z_Construct_UFunction_UYDebugCamera_DebugMenu_Setup, "Setup" }, // 798969823
		{ &Z_Construct_UFunction_UYDebugCamera_DebugMenu_SetUseDebugCamera, "SetUseDebugCamera" }, // 730277709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugCamera_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugCamera_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugCamera_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::ClassParams = {
		&UYDebugCamera_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugCamera_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugCamera_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugCamera_DebugMenu, 1050655961);
	template<> ABP_200508_API UClass* StaticClass<UYDebugCamera_DebugMenu>()
	{
		return UYDebugCamera_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugCamera_DebugMenu(Z_Construct_UClass_UYDebugCamera_DebugMenu, &UYDebugCamera_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYDebugCamera_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugCamera_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
