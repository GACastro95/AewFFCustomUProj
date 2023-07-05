// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MenuWidgetSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidgetSubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UMenuWidgetSubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UMenuWidgetSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELBottomHelpManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalizeFontManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execGetBottomHelpManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELBottomHelpManager**)Z_Param__Result=P_THIS->GetBottomHelpManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execGetCommonLayout)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bResult);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetCommonLayout(Z_Param_Out_bResult,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execGetLocalizeFontManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELLocalizeFontManager**)Z_Param__Result=P_THIS->GetLocalizeFontManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execGetMenuNotifyOnlineErrorManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELMenuNotifyOnlineErrorManager**)Z_Param__Result=P_THIS->GetMenuNotifyOnlineErrorManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execIsShowCommonLayoutWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowCommonLayoutWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execSetShowCommonLayoutWidget)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowCommonLayoutWidget(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetSubsystem::execSetupBottomHelpManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBottomHelpManager();
		P_NATIVE_END;
	}
	void UMenuWidgetSubsystem::StaticRegisterNativesUMenuWidgetSubsystem()
	{
		UClass* Class = UMenuWidgetSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBottomHelpManager", &UMenuWidgetSubsystem::execGetBottomHelpManager },
			{ "GetCommonLayout", &UMenuWidgetSubsystem::execGetCommonLayout },
			{ "GetLocalizeFontManager", &UMenuWidgetSubsystem::execGetLocalizeFontManager },
			{ "GetMenuNotifyOnlineErrorManager", &UMenuWidgetSubsystem::execGetMenuNotifyOnlineErrorManager },
			{ "IsShowCommonLayoutWidget", &UMenuWidgetSubsystem::execIsShowCommonLayoutWidget },
			{ "SetShowCommonLayoutWidget", &UMenuWidgetSubsystem::execSetShowCommonLayoutWidget },
			{ "SetupBottomHelpManager", &UMenuWidgetSubsystem::execSetupBottomHelpManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics
	{
		struct MenuWidgetSubsystem_eventGetBottomHelpManager_Parms
		{
			UELBottomHelpManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetSubsystem_eventGetBottomHelpManager_Parms, ReturnValue), Z_Construct_UClass_UELBottomHelpManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "GetBottomHelpManager", nullptr, nullptr, sizeof(MenuWidgetSubsystem_eventGetBottomHelpManager_Parms), Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics
	{
		struct MenuWidgetSubsystem_eventGetCommonLayout_Parms
		{
			bool bResult;
			const TSubclassOf<UUserWidget>  Class;
			UUserWidget* ReturnValue;
		};
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((MenuWidgetSubsystem_eventGetCommonLayout_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuWidgetSubsystem_eventGetCommonLayout_Parms), &Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetSubsystem_eventGetCommonLayout_Parms, Class), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetSubsystem_eventGetCommonLayout_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "GetCommonLayout", nullptr, nullptr, sizeof(MenuWidgetSubsystem_eventGetCommonLayout_Parms), Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics
	{
		struct MenuWidgetSubsystem_eventGetLocalizeFontManager_Parms
		{
			UELLocalizeFontManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetSubsystem_eventGetLocalizeFontManager_Parms, ReturnValue), Z_Construct_UClass_UELLocalizeFontManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "GetLocalizeFontManager", nullptr, nullptr, sizeof(MenuWidgetSubsystem_eventGetLocalizeFontManager_Parms), Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics
	{
		struct MenuWidgetSubsystem_eventGetMenuNotifyOnlineErrorManager_Parms
		{
			UELMenuNotifyOnlineErrorManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetSubsystem_eventGetMenuNotifyOnlineErrorManager_Parms, ReturnValue), Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "GetMenuNotifyOnlineErrorManager", nullptr, nullptr, sizeof(MenuWidgetSubsystem_eventGetMenuNotifyOnlineErrorManager_Parms), Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics
	{
		struct MenuWidgetSubsystem_eventIsShowCommonLayoutWidget_Parms
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
	void Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MenuWidgetSubsystem_eventIsShowCommonLayoutWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuWidgetSubsystem_eventIsShowCommonLayoutWidget_Parms), &Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "IsShowCommonLayoutWidget", nullptr, nullptr, sizeof(MenuWidgetSubsystem_eventIsShowCommonLayoutWidget_Parms), Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics
	{
		struct MenuWidgetSubsystem_eventSetShowCommonLayoutWidget_Parms
		{
			bool bNewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((MenuWidgetSubsystem_eventSetShowCommonLayoutWidget_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MenuWidgetSubsystem_eventSetShowCommonLayoutWidget_Parms), &Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "SetShowCommonLayoutWidget", nullptr, nullptr, sizeof(MenuWidgetSubsystem_eventSetShowCommonLayoutWidget_Parms), Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetSubsystem, nullptr, "SetupBottomHelpManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuWidgetSubsystem_NoRegister()
	{
		return UMenuWidgetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMenuWidgetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BottomHelpManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BottomHelpManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LocalizeFontManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_LocalizeFontManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MenuNotifyOnlineErrorManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MenuNotifyOnlineErrorManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLayoutWidgetVisible_MetaData[];
#endif
		static void NewProp_bLayoutWidgetVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLayoutWidgetVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuWidgetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuWidgetSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_GetBottomHelpManager, "GetBottomHelpManager" }, // 697703896
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_GetCommonLayout, "GetCommonLayout" }, // 506853863
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_GetLocalizeFontManager, "GetLocalizeFontManager" }, // 1481558294
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_GetMenuNotifyOnlineErrorManager, "GetMenuNotifyOnlineErrorManager" }, // 2048973637
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_IsShowCommonLayoutWidget, "IsShowCommonLayoutWidget" }, // 2583023946
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_SetShowCommonLayoutWidget, "SetShowCommonLayoutWidget" }, // 603947756
		{ &Z_Construct_UFunction_UMenuWidgetSubsystem_SetupBottomHelpManager, "SetupBottomHelpManager" }, // 1710570363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MenuWidgetSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_BottomHelpManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuWidgetSubsystem" },
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_BottomHelpManager = { "m_BottomHelpManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetSubsystem, m_BottomHelpManager), Z_Construct_UClass_UELBottomHelpManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_BottomHelpManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_BottomHelpManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_LocalizeFontManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuWidgetSubsystem" },
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_LocalizeFontManager = { "m_LocalizeFontManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetSubsystem, m_LocalizeFontManager), Z_Construct_UClass_UELLocalizeFontManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_LocalizeFontManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_LocalizeFontManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_MenuNotifyOnlineErrorManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuWidgetSubsystem" },
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_MenuNotifyOnlineErrorManager = { "m_MenuNotifyOnlineErrorManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetSubsystem, m_MenuNotifyOnlineErrorManager), Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_MenuNotifyOnlineErrorManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_MenuNotifyOnlineErrorManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuWidgetSubsystem" },
		{ "ModuleRelativePath", "Public/MenuWidgetSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible_SetBit(void* Obj)
	{
		((UMenuWidgetSubsystem*)Obj)->bLayoutWidgetVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible = { "bLayoutWidgetVisible", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMenuWidgetSubsystem), &Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuWidgetSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_BottomHelpManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_LocalizeFontManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_m_MenuNotifyOnlineErrorManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetSubsystem_Statics::NewProp_bLayoutWidgetVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuWidgetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidgetSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidgetSubsystem_Statics::ClassParams = {
		&UMenuWidgetSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenuWidgetSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuWidgetSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuWidgetSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuWidgetSubsystem, 3712952255);
	template<> ABP_200508_API UClass* StaticClass<UMenuWidgetSubsystem>()
	{
		return UMenuWidgetSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuWidgetSubsystem(Z_Construct_UClass_UMenuWidgetSubsystem, &UMenuWidgetSubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UMenuWidgetSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidgetSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
