// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuOperationalWidgetManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuOperationalWidgetManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuOperationalWidgetManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangeMenuInputDevice__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangedWidget__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangedWidgetType__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ResetWidgetAll__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execCloseAllWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseAllWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execGetCurrentWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELOperationalWidgetBase**)Z_Param__Result=P_THIS->GetCurrentWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execGetCurrentWidgetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(yEnMenuWidgetType*)Z_Param__Result=P_THIS->GetCurrentWidgetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execGetMenuWidgetArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UELOperationalWidgetBase*>*)Z_Param__Result=P_THIS->GetMenuWidgetArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execGetWidget)
	{
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_eMenuWidgetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELOperationalWidgetBase**)Z_Param__Result=P_THIS->GetWidget(yEnMenuWidgetType(Z_Param_eMenuWidgetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execSetCurrentWidget)
	{
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentWidget(yEnMenuWidgetType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuOperationalWidgetManagerBase::execSetManagedMenuWidget)
	{
		P_GET_OBJECT(UELOperationalWidgetBase,Z_Param_MenuWidget);
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManagedMenuWidget(Z_Param_MenuWidget,yEnMenuWidgetType(Z_Param_Type));
		P_NATIVE_END;
	}
	void AELMenuOperationalWidgetManagerBase::StaticRegisterNativesAELMenuOperationalWidgetManagerBase()
	{
		UClass* Class = AELMenuOperationalWidgetManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseAllWidgets", &AELMenuOperationalWidgetManagerBase::execCloseAllWidgets },
			{ "GetCurrentWidget", &AELMenuOperationalWidgetManagerBase::execGetCurrentWidget },
			{ "GetCurrentWidgetType", &AELMenuOperationalWidgetManagerBase::execGetCurrentWidgetType },
			{ "GetMenuWidgetArray", &AELMenuOperationalWidgetManagerBase::execGetMenuWidgetArray },
			{ "GetWidget", &AELMenuOperationalWidgetManagerBase::execGetWidget },
			{ "SetCurrentWidget", &AELMenuOperationalWidgetManagerBase::execSetCurrentWidget },
			{ "SetManagedMenuWidget", &AELMenuOperationalWidgetManagerBase::execSetManagedMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "CloseAllWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics
	{
		struct ELMenuOperationalWidgetManagerBase_eventGetCurrentWidget_Parms
		{
			UELOperationalWidgetBase* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventGetCurrentWidget_Parms, ReturnValue), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "GetCurrentWidget", nullptr, nullptr, sizeof(ELMenuOperationalWidgetManagerBase_eventGetCurrentWidget_Parms), Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics
	{
		struct ELMenuOperationalWidgetManagerBase_eventGetCurrentWidgetType_Parms
		{
			yEnMenuWidgetType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventGetCurrentWidgetType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "GetCurrentWidgetType", nullptr, nullptr, sizeof(ELMenuOperationalWidgetManagerBase_eventGetCurrentWidgetType_Parms), Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics
	{
		struct ELMenuOperationalWidgetManagerBase_eventGetMenuWidgetArray_Parms
		{
			TArray<UELOperationalWidgetBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventGetMenuWidgetArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "GetMenuWidgetArray", nullptr, nullptr, sizeof(ELMenuOperationalWidgetManagerBase_eventGetMenuWidgetArray_Parms), Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics
	{
		struct ELMenuOperationalWidgetManagerBase_eventGetWidget_Parms
		{
			yEnMenuWidgetType eMenuWidgetType;
			UELOperationalWidgetBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eMenuWidgetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eMenuWidgetType;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_eMenuWidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_eMenuWidgetType = { "eMenuWidgetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventGetWidget_Parms, eMenuWidgetType), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_eMenuWidgetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_eMenuWidgetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "GetWidget", nullptr, nullptr, sizeof(ELMenuOperationalWidgetManagerBase_eventGetWidget_Parms), Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics
	{
		struct ELMenuOperationalWidgetManagerBase_eventSetCurrentWidget_Parms
		{
			yEnMenuWidgetType Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventSetCurrentWidget_Parms, Type), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "SetCurrentWidget", nullptr, nullptr, sizeof(ELMenuOperationalWidgetManagerBase_eventSetCurrentWidget_Parms), Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics
	{
		struct ELMenuOperationalWidgetManagerBase_eventSetManagedMenuWidget_Parms
		{
			UELOperationalWidgetBase* MenuWidget;
			yEnMenuWidgetType Type;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventSetManagedMenuWidget_Parms, MenuWidget), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_MenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_MenuWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuOperationalWidgetManagerBase_eventSetManagedMenuWidget_Parms, Type), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_MenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, nullptr, "SetManagedMenuWidget", nullptr, nullptr, sizeof(ELMenuOperationalWidgetManagerBase_eventSetManagedMenuWidget_Parms), Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_NoRegister()
	{
		return AELMenuOperationalWidgetManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnableInput1P_MetaData[];
#endif
		static void NewProp_IsEnableInput1P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnableInput1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChangeBrother_MetaData[];
#endif
		static void NewProp_IsChangeBrother_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChangeBrother;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUpdateKeyConfig_MetaData[];
#endif
		static void NewProp_IsUpdateKeyConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUpdateKeyConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuWidgetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MenuWidgetArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeInputDeviceDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeInputDeviceDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChangeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChangedWidgetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangedWidgetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResetWidgetAll_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetWidgetAll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_CloseAllWidgets, "CloseAllWidgets" }, // 4231959629
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidget, "GetCurrentWidget" }, // 4174281224
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetCurrentWidgetType, "GetCurrentWidgetType" }, // 3569121803
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetMenuWidgetArray, "GetMenuWidgetArray" }, // 1445004204
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_GetWidget, "GetWidget" }, // 4033728449
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetCurrentWidget, "SetCurrentWidget" }, // 4266145003
		{ &Z_Construct_UFunction_AELMenuOperationalWidgetManagerBase_SetManagedMenuWidget, "SetManagedMenuWidget" }, // 779898370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMenuOperationalWidgetManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P_SetBit(void* Obj)
	{
		((AELMenuOperationalWidgetManagerBase*)Obj)->IsEnableInput1P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P = { "IsEnableInput1P", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMenuOperationalWidgetManagerBase), &Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother_SetBit(void* Obj)
	{
		((AELMenuOperationalWidgetManagerBase*)Obj)->IsChangeBrother = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother = { "IsChangeBrother", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMenuOperationalWidgetManagerBase), &Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig_SetBit(void* Obj)
	{
		((AELMenuOperationalWidgetManagerBase*)Obj)->IsUpdateKeyConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig = { "IsUpdateKeyConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMenuOperationalWidgetManagerBase), &Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_Inner = { "MenuWidgetArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray = { "MenuWidgetArray", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, MenuWidgetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_ChangeInputDeviceDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_ChangeInputDeviceDelegate = { "ChangeInputDeviceDelegate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, ChangeInputDeviceDelegate), Z_Construct_UDelegateFunction_ABP_200508_ChangeMenuInputDevice__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_ChangeInputDeviceDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_ChangeInputDeviceDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangeWidget = { "OnChangeWidget", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, OnChangeWidget), Z_Construct_UDelegateFunction_ABP_200508_ChangedWidget__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangedWidgetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangedWidgetType = { "OnChangedWidgetType", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, OnChangedWidgetType), Z_Construct_UDelegateFunction_ABP_200508_ChangedWidgetType__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangedWidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangedWidgetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnResetWidgetAll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuOperationalWidgetManagerBase" },
		{ "ModuleRelativePath", "Public/ELMenuOperationalWidgetManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnResetWidgetAll = { "OnResetWidgetAll", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, OnResetWidgetAll), Z_Construct_UDelegateFunction_ABP_200508_ResetWidgetAll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnResetWidgetAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnResetWidgetAll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsEnableInput1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsChangeBrother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_IsUpdateKeyConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_MenuWidgetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_ChangeInputDeviceDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnChangedWidgetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::NewProp_OnResetWidgetAll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMenuOperationalWidgetManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::ClassParams = {
		&AELMenuOperationalWidgetManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMenuOperationalWidgetManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMenuOperationalWidgetManagerBase, 3224711870);
	template<> ABP_200508_API UClass* StaticClass<AELMenuOperationalWidgetManagerBase>()
	{
		return AELMenuOperationalWidgetManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMenuOperationalWidgetManagerBase(Z_Construct_UClass_AELMenuOperationalWidgetManagerBase, &AELMenuOperationalWidgetManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMenuOperationalWidgetManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMenuOperationalWidgetManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
