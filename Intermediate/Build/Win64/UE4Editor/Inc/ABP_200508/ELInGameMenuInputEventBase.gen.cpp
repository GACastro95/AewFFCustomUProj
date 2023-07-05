// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInGameMenuInputEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInGameMenuInputEventBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELInGameMenuInputEventBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELInGameMenuInputEventBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnInputKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FyMenuInputParam();
// End Cross Module References
	DEFINE_FUNCTION(UELInGameMenuInputEventBase::execInputEvent)
	{
		P_GET_ENUM(yEnInputKey,Z_Param_InputKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent(yEnInputKey(Z_Param_InputKey),EInputEvent(Z_Param_KeyEvent),Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELInGameMenuInputEventBase::execInputEvent_AnyKey)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_AnyKey(EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	void UELInGameMenuInputEventBase::StaticRegisterNativesUELInGameMenuInputEventBase()
	{
		UClass* Class = UELInGameMenuInputEventBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputEvent", &UELInGameMenuInputEventBase::execInputEvent },
			{ "InputEvent_AnyKey", &UELInGameMenuInputEventBase::execInputEvent_AnyKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics
	{
		struct ELInGameMenuInputEventBase_eventInputEvent_Parms
		{
			yEnInputKey InputKey;
			TEnumAsByte<EInputEvent> KeyEvent;
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InputKey_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventBase_eventInputEvent_Parms, InputKey), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventBase_eventInputEvent_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventBase_eventInputEvent_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_InputKey_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInGameMenuInputEventBase, nullptr, "InputEvent", nullptr, nullptr, sizeof(ELInGameMenuInputEventBase_eventInputEvent_Parms), Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics
	{
		struct ELInGameMenuInputEventBase_eventInputEvent_AnyKey_Parms
		{
			TEnumAsByte<EInputEvent> KeyEvent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventBase_eventInputEvent_AnyKey_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::NewProp_KeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELInGameMenuInputEventBase, nullptr, "InputEvent_AnyKey", nullptr, nullptr, sizeof(ELInGameMenuInputEventBase_eventInputEvent_AnyKey_Parms), Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELInGameMenuInputEventBase_NoRegister()
	{
		return UELInGameMenuInputEventBase::StaticClass();
	}
	struct Z_Construct_UClass_UELInGameMenuInputEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMenuInputParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMenuInputParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent, "InputEvent" }, // 2660159176
		{ &Z_Construct_UFunction_UELInGameMenuInputEventBase_InputEvent_AnyKey, "InputEvent_AnyKey" }, // 3621311011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELInGameMenuInputEventBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::NewProp_DefaultMenuInputParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInGameMenuInputEventBase" },
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::NewProp_DefaultMenuInputParam = { "DefaultMenuInputParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELInGameMenuInputEventBase, DefaultMenuInputParam), Z_Construct_UScriptStruct_FyMenuInputParam, METADATA_PARAMS(Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::NewProp_DefaultMenuInputParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::NewProp_DefaultMenuInputParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::NewProp_DefaultMenuInputParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELInGameMenuInputEventBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::ClassParams = {
		&UELInGameMenuInputEventBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELInGameMenuInputEventBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELInGameMenuInputEventBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELInGameMenuInputEventBase, 1456808527);
	template<> ABP_200508_API UClass* StaticClass<UELInGameMenuInputEventBase>()
	{
		return UELInGameMenuInputEventBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELInGameMenuInputEventBase(Z_Construct_UClass_UELInGameMenuInputEventBase, &UELInGameMenuInputEventBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELInGameMenuInputEventBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELInGameMenuInputEventBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
