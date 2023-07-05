// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/KeyConfigDeviceWidgetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyConfigDeviceWidgetInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UKeyConfigDeviceWidgetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
// End Cross Module References
	void IKeyConfigDeviceWidgetInterface::ChangeBaseGameMode(bool Valid)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeBaseGameMode instead.");
	}
	void IKeyConfigDeviceWidgetInterface::ChangeKeyMapLayout(TArray<FKeyMapSettingData> const& _inKeyMapSettingData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeKeyMapLayout instead.");
	}
	void IKeyConfigDeviceWidgetInterface::Initialize()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Initialize instead.");
	}
	void IKeyConfigDeviceWidgetInterface::SetSelectCursor(EKeyMappingType _inKeyMapType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSelectCursor instead.");
	}
	void IKeyConfigDeviceWidgetInterface::UnSelectCursor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnSelectCursor instead.");
	}
	void UKeyConfigDeviceWidgetInterface::StaticRegisterNativesUKeyConfigDeviceWidgetInterface()
	{
	}
	struct Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics
	{
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((KeyConfigDeviceWidgetInterface_eventChangeBaseGameMode_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KeyConfigDeviceWidgetInterface_eventChangeBaseGameMode_Parms), &Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::NewProp_Valid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KeyConfigDeviceWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyConfigDeviceWidgetInterface, nullptr, "ChangeBaseGameMode", nullptr, nullptr, sizeof(KeyConfigDeviceWidgetInterface_eventChangeBaseGameMode_Parms), Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inKeyMapSettingData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inKeyMapSettingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__inKeyMapSettingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData_Inner = { "_inKeyMapSettingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData = { "_inKeyMapSettingData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyConfigDeviceWidgetInterface_eventChangeKeyMapLayout_Parms, _inKeyMapSettingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::NewProp__inKeyMapSettingData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KeyConfigDeviceWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyConfigDeviceWidgetInterface, nullptr, "ChangeKeyMapLayout", nullptr, nullptr, sizeof(KeyConfigDeviceWidgetInterface_eventChangeKeyMapLayout_Parms), Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KeyConfigDeviceWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyConfigDeviceWidgetInterface, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__inKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__inKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::NewProp__inKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::NewProp__inKeyMapType = { "_inKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyConfigDeviceWidgetInterface_eventSetSelectCursor_Parms, _inKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::NewProp__inKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::NewProp__inKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KeyConfigDeviceWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyConfigDeviceWidgetInterface, nullptr, "SetSelectCursor", nullptr, nullptr, sizeof(KeyConfigDeviceWidgetInterface_eventSetSelectCursor_Parms), Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KeyConfigDeviceWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyConfigDeviceWidgetInterface, nullptr, "UnSelectCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_NoRegister()
	{
		return UKeyConfigDeviceWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode, "ChangeBaseGameMode" }, // 1144794767
		{ &Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout, "ChangeKeyMapLayout" }, // 3601386793
		{ &Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_Initialize, "Initialize" }, // 3485839470
		{ &Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_SetSelectCursor, "SetSelectCursor" }, // 242623064
		{ &Z_Construct_UFunction_UKeyConfigDeviceWidgetInterface_UnSelectCursor, "UnSelectCursor" }, // 2746711915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KeyConfigDeviceWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKeyConfigDeviceWidgetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::ClassParams = {
		&UKeyConfigDeviceWidgetInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyConfigDeviceWidgetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKeyConfigDeviceWidgetInterface, 3753659632);
	template<> ABP_200508_API UClass* StaticClass<UKeyConfigDeviceWidgetInterface>()
	{
		return UKeyConfigDeviceWidgetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKeyConfigDeviceWidgetInterface(Z_Construct_UClass_UKeyConfigDeviceWidgetInterface, &UKeyConfigDeviceWidgetInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UKeyConfigDeviceWidgetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyConfigDeviceWidgetInterface);
	static FName NAME_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode = FName(TEXT("ChangeBaseGameMode"));
	void IKeyConfigDeviceWidgetInterface::Execute_ChangeBaseGameMode(UObject* O, bool Valid)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKeyConfigDeviceWidgetInterface::StaticClass()));
		KeyConfigDeviceWidgetInterface_eventChangeBaseGameMode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKeyConfigDeviceWidgetInterface_ChangeBaseGameMode);
		if (Func)
		{
			Parms.Valid=Valid;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout = FName(TEXT("ChangeKeyMapLayout"));
	void IKeyConfigDeviceWidgetInterface::Execute_ChangeKeyMapLayout(UObject* O, TArray<FKeyMapSettingData> const& _inKeyMapSettingData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKeyConfigDeviceWidgetInterface::StaticClass()));
		KeyConfigDeviceWidgetInterface_eventChangeKeyMapLayout_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKeyConfigDeviceWidgetInterface_ChangeKeyMapLayout);
		if (Func)
		{
			Parms._inKeyMapSettingData=_inKeyMapSettingData;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UKeyConfigDeviceWidgetInterface_Initialize = FName(TEXT("Initialize"));
	void IKeyConfigDeviceWidgetInterface::Execute_Initialize(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKeyConfigDeviceWidgetInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UKeyConfigDeviceWidgetInterface_Initialize);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UKeyConfigDeviceWidgetInterface_SetSelectCursor = FName(TEXT("SetSelectCursor"));
	void IKeyConfigDeviceWidgetInterface::Execute_SetSelectCursor(UObject* O, EKeyMappingType _inKeyMapType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKeyConfigDeviceWidgetInterface::StaticClass()));
		KeyConfigDeviceWidgetInterface_eventSetSelectCursor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKeyConfigDeviceWidgetInterface_SetSelectCursor);
		if (Func)
		{
			Parms._inKeyMapType=_inKeyMapType;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UKeyConfigDeviceWidgetInterface_UnSelectCursor = FName(TEXT("UnSelectCursor"));
	void IKeyConfigDeviceWidgetInterface::Execute_UnSelectCursor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKeyConfigDeviceWidgetInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UKeyConfigDeviceWidgetInterface_UnSelectCursor);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
