// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSkillMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSkillMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSkillMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSkillMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSkillManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execAddSkillMenuBorderTabTypeWidget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Tab);
		P_GET_OBJECT(UUserWidget,Z_Param__widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSkillMenuBorderTabTypeWidget(Z_Param__Tab,Z_Param__widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execAddSkillMenuCanvasPanelTypeWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param__widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSkillMenuCanvasPanelTypeWidget(Z_Param__widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execGetSkillManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCareerSkillManager**)Z_Param__Result=P_THIS->GetSkillManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execInitSkillMenuWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitSkillMenuWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execIsTabTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTabTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execSetSkillCategory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__CategoryPage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillCategory(Z_Param__CategoryPage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execSetSkillManager)
	{
		P_GET_OBJECT(AELCareerSkillManager,Z_Param__SkillManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillManager(Z_Param__SkillManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSkillMenuWidgetBase::execSetTabTick)
	{
		P_GET_UBOOL(Z_Param__bTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabTick(Z_Param__bTick);
		P_NATIVE_END;
	}
	void UELSkillMenuWidgetBase::StaticRegisterNativesUELSkillMenuWidgetBase()
	{
		UClass* Class = UELSkillMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSkillMenuBorderTabTypeWidget", &UELSkillMenuWidgetBase::execAddSkillMenuBorderTabTypeWidget },
			{ "AddSkillMenuCanvasPanelTypeWidget", &UELSkillMenuWidgetBase::execAddSkillMenuCanvasPanelTypeWidget },
			{ "GetSkillManager", &UELSkillMenuWidgetBase::execGetSkillManager },
			{ "InitSkillMenuWidget", &UELSkillMenuWidgetBase::execInitSkillMenuWidget },
			{ "IsTabTick", &UELSkillMenuWidgetBase::execIsTabTick },
			{ "SetSkillCategory", &UELSkillMenuWidgetBase::execSetSkillCategory },
			{ "SetSkillManager", &UELSkillMenuWidgetBase::execSetSkillManager },
			{ "SetTabTick", &UELSkillMenuWidgetBase::execSetTabTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics
	{
		struct ELSkillMenuWidgetBase_eventAddSkillMenuBorderTabTypeWidget_Parms
		{
			int32 _Tab;
			UUserWidget* _widget;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Tab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__Tab = { "_Tab", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSkillMenuWidgetBase_eventAddSkillMenuBorderTabTypeWidget_Parms, _Tab), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSkillMenuWidgetBase_eventAddSkillMenuBorderTabTypeWidget_Parms, _widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__Tab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::NewProp__widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "AddSkillMenuBorderTabTypeWidget", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventAddSkillMenuBorderTabTypeWidget_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics
	{
		struct ELSkillMenuWidgetBase_eventAddSkillMenuCanvasPanelTypeWidget_Parms
		{
			UUserWidget* _widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::NewProp__widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSkillMenuWidgetBase_eventAddSkillMenuCanvasPanelTypeWidget_Parms, _widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::NewProp__widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::NewProp__widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::NewProp__widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "AddSkillMenuCanvasPanelTypeWidget", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventAddSkillMenuCanvasPanelTypeWidget_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics
	{
		struct ELSkillMenuWidgetBase_eventGetSkillManager_Parms
		{
			AELCareerSkillManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSkillMenuWidgetBase_eventGetSkillManager_Parms, ReturnValue), Z_Construct_UClass_AELCareerSkillManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "GetSkillManager", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventGetSkillManager_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "InitSkillMenuWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics
	{
		struct ELSkillMenuWidgetBase_eventIsTabTick_Parms
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
	void Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSkillMenuWidgetBase_eventIsTabTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSkillMenuWidgetBase_eventIsTabTick_Parms), &Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "IsTabTick", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventIsTabTick_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics
	{
		struct ELSkillMenuWidgetBase_eventSetSkillCategory_Parms
		{
			int32 _CategoryPage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__CategoryPage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::NewProp__CategoryPage = { "_CategoryPage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSkillMenuWidgetBase_eventSetSkillCategory_Parms, _CategoryPage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::NewProp__CategoryPage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "SetSkillCategory", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventSetSkillCategory_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics
	{
		struct ELSkillMenuWidgetBase_eventSetSkillManager_Parms
		{
			AELCareerSkillManager* _SkillManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__SkillManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::NewProp__SkillManager = { "_SkillManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSkillMenuWidgetBase_eventSetSkillManager_Parms, _SkillManager), Z_Construct_UClass_AELCareerSkillManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::NewProp__SkillManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "SetSkillManager", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventSetSkillManager_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics
	{
		struct ELSkillMenuWidgetBase_eventSetTabTick_Parms
		{
			bool _bTick;
		};
		static void NewProp__bTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::NewProp__bTick_SetBit(void* Obj)
	{
		((ELSkillMenuWidgetBase_eventSetTabTick_Parms*)Obj)->_bTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::NewProp__bTick = { "_bTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSkillMenuWidgetBase_eventSetTabTick_Parms), &Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::NewProp__bTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::NewProp__bTick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSkillMenuWidgetBase, nullptr, "SetTabTick", nullptr, nullptr, sizeof(ELSkillMenuWidgetBase_eventSetTabTick_Parms), Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSkillMenuWidgetBase_NoRegister()
	{
		return UELSkillMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSkillMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuBorderTabTypeWidget, "AddSkillMenuBorderTabTypeWidget" }, // 2313839382
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_AddSkillMenuCanvasPanelTypeWidget, "AddSkillMenuCanvasPanelTypeWidget" }, // 1827368374
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_GetSkillManager, "GetSkillManager" }, // 2361266786
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_InitSkillMenuWidget, "InitSkillMenuWidget" }, // 1731441087
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_IsTabTick, "IsTabTick" }, // 1851571236
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillCategory, "SetSkillCategory" }, // 2718121117
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_SetSkillManager, "SetSkillManager" }, // 2265653482
		{ &Z_Construct_UFunction_UELSkillMenuWidgetBase_SetTabTick, "SetTabTick" }, // 170786266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSkillMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSkillMenuWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSkillMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::ClassParams = {
		&UELSkillMenuWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSkillMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSkillMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSkillMenuWidgetBase, 3296083519);
	template<> ABP_200508_API UClass* StaticClass<UELSkillMenuWidgetBase>()
	{
		return UELSkillMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSkillMenuWidgetBase(Z_Construct_UClass_UELSkillMenuWidgetBase, &UELSkillMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSkillMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSkillMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
